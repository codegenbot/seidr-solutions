#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

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

bool sameVectors(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    std::vector<std::string> v1 = select_words("Hello World", 2);
    std::vector<std::string> v2 = select_words("Hi My Friend", 3);
    
    if(sameVectors(v1,v2))
        std::cout << "The two vectors are the same.\n";
    else
        std::cout << "The two vectors are not the same.\n";

    return 0;
}