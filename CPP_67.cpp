#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' && s[i+1] == 'p') {
            for (++i; i < s.length() && s[i] != ' '; ++i) {
                total_apples += int(s[i] - '0');
            }
        } else if (s[i] == 'o' && s[i+1] == 'r') {
            for (++i; i < s.length() && s[i] != ' '; ++i) {
                total_oranges += int(s[i] - '0');
            }
        }
    }
    
    return n - total_apples - total_oranges;
}

int main() {
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl; 
    cout << fruit_distribution("0 apples and 1 oranges",3) << endl;
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl;
    cout << fruit_distribution("100 apples and 1 oranges",120) << endl;
    return 0;
}