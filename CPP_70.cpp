```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> input = {10, 5, 20};
    vector<int> output = strange_sort_vector(input);
    
    for (int i: output) {
        cout << i << " ";
    }
    
    return 0;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}