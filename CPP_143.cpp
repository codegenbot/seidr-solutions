```cpp
#include <string>
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
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else {
            i++;
        }
    }
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] != ' ') {
            if (is_prime(count + 1)) {
                result += sentence.substr(0, count+1) + " ";
            }
            count++;
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    assert(words_in_sentence("here is").size() == 2);
    return 0;
}