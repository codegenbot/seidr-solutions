#include <vector>
#include <string>

std::vector<std::basic_string<char>> reverse_delete(std::basic_string<char> s, std::basic_string<char> c) {
    std::vector<std::basic_string<char>> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(std::to_string(ch));
        }
    }
    std::basic_string<char> temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    std::basic_string<char> rev = reverse(temp);
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

std::basic_string<char> reverse(std::basic_string<char> s) {
    std::basic_string<char> rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

bool issame(std::vector<std::basic_string<char>> a, std::vector<std::basic_string<char>> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}