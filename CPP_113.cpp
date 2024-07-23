```
#include <vector>
#include <string>
#include <initializer_list>

int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> expected;
    for (int i = 0; i < test.size(); i++) {
        int count = 0;
        for (char c : test[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        expected.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i+1));
    }
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i+1));
    }
    return result;
}