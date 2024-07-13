```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string>) {
    return (a.size() == 2 && a[0].empty() && a[1] == "True");
}

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}

vector<string> reverse_delete(string s, string c) {
    vector<char> v;
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            v.push_back(x);
    }
    string result = "";
    for (char x : v) {
        result += x;
    }
    
    string temp = result;
    reverse(temp.begin(), temp.end());
    if (result == temp) {
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}