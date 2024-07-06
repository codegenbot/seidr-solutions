```cpp
#include <vector>
#include <string>
using namespace std;

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
            if (c % 2 != 0) {
                count++;
            }
        }
        string temp = to_string(count);
        temp += " number of odd elements in the str" + to_string(i+1) + " of the input.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}) , {"the number of odd elements 2n the str2ng 2 of the 2nput.","the number of odd elements 1n the str1ng 1 of the 1nput.","the number of odd elements 3n the str3ng 3 of the 3nput."}));
    return 0;
}