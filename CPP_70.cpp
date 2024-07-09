```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    vector<int> input;
    cout << "Enter the elements of your list, each on a new line: ";
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    if (!input.empty()) {
        vector<int> sorted_list = strange_sort_list(input);
        cout << "The sorted list is: ";
        for (int i : sorted_list)
            cout << i << " ";
        cout << endl;
        vector<int> another_list;
        for (int i = 0; i < input.size(); i++) {
            another_list.push_back(i + 1);
        }
        if (issame(sorted_list, another_list))
            cout << "This is a sorted list in strange order.\n";
        else
            cout << "This is not a sorted list in strange order.\n";
    } else {
        cout << "The list is empty.\n";
    }
}