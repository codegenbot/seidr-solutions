#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 0;
    int i = 0;
    
    while (frame < 10) {
        switch(s[i]) {
            case 'X':
                total += 10;
                if (s[i+2] == '/')
                    total += 10;
                else
                    total += s[i+1] == 'X' ? 10 : s[i+1] - '0';
                i++;
                break;
                
            case '/':
                total += 10 - (s[i-1] - '0');
                break;
                
            default:
                total += s[i] - '0';
                if (s[i+1] == '/')
                    total += 10 - (s[i] - '0');
                else
                    total += s[i+1] - '0';
                i++;
                break;
        }
        
        i++;
        frame++;
    }
    
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << calculateScore(s) << endl;
    return 0;
}