#include <vector>
#include <string>

std::vector<std::pair<std::string,bool>> reverse_delete(std::string s1, std::string s2) {
    std::vector<std::pair<std::string,bool>> result;
    
    for(int i = s1.length() - 1; i >= 0; i--) {
        if(s2.find(s1.substr(i, 1)) != std::string::npos) {
            result.push_back({s1.substr(i, 1), true});
            s1.erase(i, 1);
        }
    }

    for(std::string str : s1) {
        result.push_back({str, false});
    }

    return result;
}

int main() {
    assert((reverse_delete("mamma", "mia")) == (std::vector<std::pair<std::string,bool>>{{"ma",true}, {"a",false}}));
    return 0;
}