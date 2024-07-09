#include <cmath>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    bool isPrime[100] = {false};
    
    for (int i = 2; i * i <= 100; i++) {
        if (!isPrime[i]) {
            for (int j = i; j * i < 100; j++) {
                isPrime[j * i] = true;
            }
        }
    }

    int len = sentence.size();
    int spaceIndex = 0;

    while (spaceIndex < len) {
        spaceIndex = sentence.find(' ', spaceIndex);
        if (spaceIndex == -1)
            break;
        
        string word = sentence.substr(0, spaceIndex);
        if (!isPrime[word.size()]) 
            continue;

        result += word + " ";
    }
    
    return result;
}