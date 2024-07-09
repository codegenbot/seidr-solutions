#include <string>
using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    int length = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            if (is_prime(length)) {
                result += sentence.substr(length - i, i - length + 1) + " ";
            }
            length = 0;
        } else {
            length++;
        }
    }
    if (is_prime(length)) {
        result += sentence.substr(0, length);
    }
    return result;
}