```cpp
#include <iostream>
#include <string>
#include <cctype>

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
    int i = 0;
    while(i < sentence.size()) {
        if(!isalpha(sentence[i])) {
            i++;
            continue;
        }
        int j = i;
        int len = 0;
        while(j < sentence.size() && isalpha(sentence[j])) {
            len++;
            j++;
        }
        if(isPrime(len)) result += sentence.substr(i, len) + " ";
        i = j;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    string output = words_in_sentence(input);
    cout << "Result: " << output << endl;
    return 0;
}