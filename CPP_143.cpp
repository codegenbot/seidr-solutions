#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    size_t pos = 0;
    string word;
    while ((pos = sentence.find(' ')) != string::npos) {
        word = sentence.substr(0, pos);
        if (find(begin(primes), end(primes), word.length()) != end(primes)) {
            result += word + " ";
        }
        sentence.erase(0, pos + 1);
    }
    if (find(begin(primes), end(primes), sentence.length()) != end(primes)) {
        result += sentence;
    }
    
    return result;
}

int main() {
    assert (words_in_sentence("here is") == "is");
    return 0;
}