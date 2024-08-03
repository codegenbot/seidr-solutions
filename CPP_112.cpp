```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    result.push_back((temp == reversed) ? "True" : "False");
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    // Add more test cases as needed
    return 0;
}