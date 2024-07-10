#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
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
    vector<int> v1, v2;
    for(int i=0; i<5; i++) {
        int num;
        cout << "Enter number: ";
        cin >> num;
        v1.push_back(num);
    }

    v2 = strange_sort_vector(v1);

    cout << "Sorted Vector: ";
    for(int i=0; i<v2.size(); i++) {
        cout << v2[i] << " ";
    }
    return 0;
}