```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int x, int y) {
    if (x > y) {
        return false;
    } else if (y > x) {
        return true;
    } else {
        return false;
    }
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    for (auto it = lst.begin(); it != lst.end(); ) {
        if (it->length() % 2) {
            lst.erase(it);
        } else {
            ++it;
        }
    }

    // Sort the remaining vector by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });

    return lst;
}

int main() {
    vector<string> lst = {"cat", "dog", "elephant", "a", "b"};
    
    // Sort the list by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });

    for (auto i : lst)
    {
        cout << i << " ";
    }

    vector<string> result = sorted_list_sum(lst);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}