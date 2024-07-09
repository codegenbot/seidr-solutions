```
#include <string>
#include <vector>

string words_in_sentence(string sentence) {
    vector<int> primeLengths;
    for (int i = 2; i <= sentence.size(); i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
                isPrime = false;
        if (isPrime)
            primeLengths.push_back(i);
    }
    
    string result = "";
    vector<string> words = split(sentence, ' ');
    for (string word : words) {
        if (find(primeLengths.begin(), primeLengths.end(), word.size()) != primeLengths.end())
            result += word + " ";
    }
    
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}