#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool same(int x, int y) {
    if (x > y) {
        return false;
    } else if (y > x) {
        return true;
    } else {
        return false;
    }
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

    return 0;
}