#include <sstream>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    istringstream iss(sentence);
    string word, result;
    while (iss >> word) {
        if (isPrime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    assert(words_in_sentence("the quick brown fox jumps over the lazy dog") == "the fox over the dog");
    assert(words_in_sentence("a aa aaa aaaa aaaaa aaaaaa aaaaaaa") == "aaa aaaaa");
    cout << "All tests passed!" << endl;
    return 0;
}