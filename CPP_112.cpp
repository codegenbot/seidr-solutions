#include <vector>
#include <algorithm>
#include <string>

bool same(vector<std::string> a, vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::string deleteAndReverse(std::string s, std::string c) {
    std::string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            temp += ch;
    }
    std::reverse(temp.begin(), temp.end());
    return temp;
}

int main() {
    assert(same(std::vector<std::string>{deleteAndReverse("mamma", "mia")}, {"", "True"}));
}