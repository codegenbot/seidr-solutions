Here is the modified code:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int len1 = 0, len2 = 0;

    for (const string& s : lst1) {
        len1 += s.length();
    }
    for (const string& s : lst2) {
        len2 += s.length();
    }

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0;
    while (i < min(len1, len2)) {
        if (lst1[i] == lst2[i]) {
            result.push_back(lst1[i]);
            i++;
        }
        else {
            if (len1 > len2) {
                i = len2;
            }
            else if (len2 > len1) {
                i = len1;
            }
            else {
                break;
            }
        }
    }

    return result;
}

int main() {
    vector<string> vec1 = {"hi", "admin"};
    vector<string> vec2 = {"hI", "Hi"};

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}