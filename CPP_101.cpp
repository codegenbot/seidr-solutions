#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
   // Code to compare the two vectors and return true or false
   // ...
   return true; // Example code, replace with your implementation
}

std::vector<std::string> words_string(std::string s){
    std::vector<std::string> words;
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

int main() {
   assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
   return 0;
}