#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            int pos = 0;
            while((pos = sentence.find(" ")) != -1 && isPrime(strlen(sentence.substr(0, pos).c_str()))){
                result += sentence.substr(0, pos) + " ";
                sentence.erase(0, pos+1);
            }
            if(!sentence.empty()){
                result += sentence + " ";
            }
        }
    }
    return result;
}

int main() {
    assert (words_in_sentence("here is") == "is");
    return 0;
}