#include <cassert>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> select_words(const std::string& sentence, int index){
    std::vector<std::string> words;
    // Implement logic to extract words from the sentence based on the given index
    return words;
}

int main(){
    assert(issame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
}