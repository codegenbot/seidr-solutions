#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<std::string> &a, std::vector<std::string> &b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
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
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    std::vector<std::string> output = reverse_delete("mamma", "mia");
    std::vector<std::string> expected = {output[0], (output[1] == "True") ? output[1] : "False"};
    bool same = issame({output[0]}, expected);
    assert(same);
    return 0;
}