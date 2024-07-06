#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> tokens;
    size_t prev = 0, next = 0;

    do {
        next = str.find(sep, prev);
        if (next == std::string::npos)
            break;

        tokens.push_back(str.substr(prev, next - prev));
        prev = next + 1;
    } while (next != std::string::npos);

    if (prev < str.size())
        tokens.push_back(str.substr(prev));

    return tokens;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!std::equal(a[i].begin(), a[i].end(), b[i].begin())) { 
            return false;
        }
    }
    return true;
}

bool select_words(std::vector<std::string> input) {
    std::vector<std::string> output;
    for (const auto& word : input) {
        bool unique = true;
        for (const auto& out_word : output) {
            if (!std::equal(word.begin(), word.end(), out_word.begin())) { 
                unique = false;
                break;
            }
        }
        if (unique) {
            output.push_back(word);
        }
    }
    return true;
}

int main() {
    //input from user
    string str;
    cin >> str; 
    vector<string> words = split(str, ' ');
    
    if (select_words(words)) {
        cout << "Words are same." << endl;
    } else {
        cout << "Words are different." << endl;
    }
    return 0;
}