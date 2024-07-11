Here is the completed code:

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words = split(sentence, ' ');
    for (auto word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(string sentence, char c) {
    vector<string> words;
    string temp = "";
    for (auto ch : sentence) {
        if (ch == c) {
            words.push_back(temp);
            temp = "";
        } else {
            temp += ch;
        }
    }
    words.push_back(temp);
    return words;
}

int main() {
    // Testing the code
    string sentence1 = "This is a test";
    cout << words_in_sentence(sentence1) << endl;  // Output: "is"

    string sentence2 = "lets go for swimming";
    cout << words_in_sentence(sentence2) << endl;  // Output: "go for"
    
    return 0;
}