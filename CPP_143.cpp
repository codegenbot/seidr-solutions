#include <string>
#include <cassert>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c != ' '){
            word += c;
        } else {
            if(is_prime(word.size())){
                result += word + " ";
            }
            word = "";
        }
    }
    if(is_prime(word.size())){
        result += word;
    }
    return result;
}

int main() {
    assert (words_in_sentence("here is") == "is");
    return 0;
}