#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<int> lengths;
    string result = "";
    
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        
        int j = i + 1;
        while (j < sentence.size() && !isspace(sentence[j])) {
            j++;
        }
        
        string word = sentence.substr(i, j - i);
        int length = word.size();
        
        bool isPrime = true;
        for (int k = 2; k * k <= length; k++) {
            if (length % k == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            result += word + " ";
            lengths.push_back(length);
        }
        
        i = j;
    }
    
    return result.substr(0, result.size() - 1);
}