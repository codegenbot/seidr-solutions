```
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> words_string(const std::string& s){
    std::vector<std::string> result;
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(!word.empty())
        result.push_back(word);
    return result;
}

int main() {
    std::vector<std::string> result = words_string("ahmed     , gamal");
    for(const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    if(isSame(words_string("ahmed     , gamal"), words_string("gamal     , ahmed"))){
        std::cout << "The two strings are the same" << std::endl;
    }else{
        std::cout << "The two strings are not the same" << std::endl;
    }
    return 0;
}