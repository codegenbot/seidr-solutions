#include <vector>
#include <string>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), 'b') + 
                                    count(word.begin(), word.end(), 'c') + 
                                    count(word.begin(), word.end(), 'd') + 
                                    count(word.begin(), word.end(), 'f') + 
                                    count(word.begin(), word.end(), 'g') + 
                                    count(word.begin(), word.end(), 'h') + 
                                    count(word.begin(), word.end(), 'j') + 
                                    count(word.begin(), word.end(), 'k') + 
                                    count(word.begin(), word.end(), 'l') + 
                                    count(word.begin(), word.end(), 'm') + 
                                    count(word.begin(), word.end(), 'n') + 
                                    count(word.begin(), word.end(), 'p') + 
                                    count(word.begin(), word.end(), 'q') + 
                                    count(word.begin(), word.end(), 'r') + 
                                    count(word.begin(), word.end(), 's') + 
                                    count(word.begin(), word.end(), 't') + 
                                    count(word.begin(), word.end(), 'v') + 
                                    count(word.begin(), word.end(), 'w') + 
                                    count(word.begin(), word.end(), 'x') + 
                                    count(word.begin(), word.end(), 'y') + 
                                    count(word.begin(), word.end(), 'z') == n {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    std::vector<std::string> a = select_words("a b c d e f", 1);
    // Code for comparing two vectors of strings
    std::vector<std::string> b = {"b", "c", "d", "f"};
    bool same = (a == b); // Check if the vectors are equal

    return 0;
}