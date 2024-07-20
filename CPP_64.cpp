#include <string>
using namespace std;

int vowels_count(const string &s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || (tolower(c) == 'u' && c == s.back()))
            count++;
    }
    return count;
}

int main() {
    // Test cases
    cout << vowels_count("Hello World") << endl; // Expected output: 3
    cout << vowels_count("Programming") << endl; // Expected output: 3

    return 0;
}