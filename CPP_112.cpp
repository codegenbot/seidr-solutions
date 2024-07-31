#include <vector>
#include <string>
#include <algorithm>

bool issame(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b){
    if(a.first.size() != b.first.size()) return false;
    for(int i=0; i<a.first.size();i++){
        if(a.first[i] != b.first[i]) return false;
    }
    if(a.second != b.second) return false;
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
    return {temp, (temp == rev)}; 
}

int main() {
    assert(isSame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}