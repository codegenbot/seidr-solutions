#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i]) == 0) { 
            return false;
        }
    }
    return true;
}

bool select_words(std::vector<std::string> input) {
    std::vector<std::string> output;
    for (const auto& word : input) {
        bool found = false;
        for (const auto& out_word : output) {
            if (!issame(vector<std::string>{word}, vector<std::string>{out_word})) continue;
            found = true;
            break;
        }
        if (!found) {
            output.push_back(word);
        }
    }
    return issame(input, output);
}

#include <sstream>
std::vector<std::string> split(const std::string& str, char delim) {
    std::stringstream ss(str);
    std::string item;
    std::vector<std::string> tokens;
    while (std::getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
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