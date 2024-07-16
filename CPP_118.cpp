#include <string>

std::string get_closest_vowel(std::string word){
    std::string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';
    
    for (int i = word.size() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos) {
            for (int j = i - 1; j >= 0; --j) {
                if (vowels.find(word[j]) == std::string::npos) {
                    int distance = i - j;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }
    
    if (closest_vowel != ' ') {
        return std::string(1, closest_vowel);
    } else {
        return "";
    }
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}