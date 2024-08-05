#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> select_words(std::string words, int index){
    std::vector<std::string> result;
    std::string temp = "";
    for (char c : words) {
        if (c == ' ') {
            if (!temp.empty()) {
                if (index > 0) {
                    index--;
                } else {
                    result.push_back(temp);
                }
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    if (!temp.empty() && index == 0) {
        result.push_back(temp);
    }
    return result;
}

int main(){
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}