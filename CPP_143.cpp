#include<string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int count = 1;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (isPrime(count)) {
                result += sentence.substr(0, i) + " ";
                sentence.erase(0, i+1);
                count = 1;
            }
        } else {
            count++;
        }
    }
    if (isPrime(count)) {
        result += sentence;
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}