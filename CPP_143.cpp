```cpp
#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    string result = words_in_sentence(sentence);
    if (!result.empty()) {
        cout << "Words with prime length: " << result << endl;
    } else {
        cout << "No words have prime length." << endl;
    }
    
    return 0;
}

string words_in_sentence(string sentence) {
    vector<int> wordLengths;
    string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                result += word + " ";
                wordLengths.push_back(length);
            }
        }
    }
    
    return result;
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prev = 0;
    
    while ((pos = str.find(delimiter, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    
    tokens.push_back(str.substr(prev));
    return tokens;