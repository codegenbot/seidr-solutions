#include <vector>
#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (auto word : words) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; i++) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime)
                result += word + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    size_t pos = 0;

    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        tokens.push_back(token);
        str.erase(0, pos + 1);
    }

    tokens.push_back(str);

    return tokens;
}