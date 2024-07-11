#include <algorithm>
#include <cctype>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int len = 0;
    for (char c : sentence + " ") {
        if (isspace(c)) {
            bool prime = true;
            len = 0;
            while (len > 1 && prime) {
                len++;
                if (!isprime(len))
                    prime = false;
            }
            if (!prime)
                continue;
            result += ' ';
        } else {
            len++;
        }
    }
    return result.substr(1);
}

bool isprime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}