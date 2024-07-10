#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());

        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    vector<int> output = strange_sort_list(lst);
    
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}