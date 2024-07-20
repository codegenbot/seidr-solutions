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
    string test1 = "Hello World";
    string test2 = "Programming";
    
    cout << "Test 1: " << vowels_count(test1) << endl;
    cout << "Test 2: " << vowels_count(test2) << endl;
    
    return 0;
}