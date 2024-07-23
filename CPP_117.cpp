#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

std::vector<std::string> select_words(std::string s, int k) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    for (std::string word; iss >> word;) {
        if (word.size() >= k) {
            words.push_back(word.substr(0, k));
        }
    }
    return words;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(isSame(select_words("a b c d e f", 1), std::vector<std::string>({"b", "c", "d", "f"})));
}