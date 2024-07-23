```
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
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

bool sameArrays(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::string> words = select_words("Hello World this is a test", 5);
    bool result = sameArrays(words, {"Hello", "World", "this", "is", "a"});
    if (result) {
        std::cout << "The arrays are the same.\n";
    } else {
        std::cout << "The arrays are not the same.\n";
    }
}