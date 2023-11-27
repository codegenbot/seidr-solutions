#include <iostream>
#include <string>

using namespace std;

int count_upper(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i += 2){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    assert(count_upper("aAbBcCdD") == 0);
    assert(count_upper("AEIOU") == 3);
    assert(count_upper("") == 0);

    cout << "All test cases passed!" << endl;

    return 0;
}