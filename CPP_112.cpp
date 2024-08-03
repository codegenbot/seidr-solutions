#include <algorithm>
#include <vector>
#include <string>

bool issame(char a, char b) {
    return toupper(a) == toupper(b);
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (issame(ch, cc)) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    std::vector<std::string> output;
    output.push_back(result);
    std::string temp = result;
    std::reverse(temp.begin(), temp.end());
    if (temp == result) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    return output;
}