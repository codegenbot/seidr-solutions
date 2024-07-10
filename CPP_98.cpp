#include <iostream>
#include <string>

using namespace std;

int count_upper(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    // Add more tests if you need to
    return 0;
}