#include <vector>
#include <string>

bool issame(std::pair<bool, std::vector<std::string>> result) {
    return result.first;
}

std::pair<bool, std::vector<string>> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += x;
        }
    }
    result.push_back(temp);
    string reversed = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        reversed += temp[i];
    }
    std::pair<bool, std::vector<string>> p = make_pair(temp == reversed, vector<string>{temp});
    return p;
}