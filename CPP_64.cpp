#include <string>
using namespace std;

int vowels_count(const string &s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || (tolower(c) == 'u' && (c == s.back())))
            count++;
    }
    return count;
}

int main() {
    string test1 = "Hello World";
    string test2 = "CppContest";
    
    cout << vowels_count(test1) << endl; // Output: 3
    cout << vowels_count(test2) << endl; // Output: 3
    
    return 0;
}