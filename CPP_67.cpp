#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' && s[i+1] == 'p') {
            start = i;
            break;
        }
    }
    for(int i=start ;i<s.length() ;i++){
        if(s[i]==' ')
            break;
        total_apples++;
    }

    int total_oranges = 0;
    start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'o' && s[i+1] == 'r') {
            start = i;
            break;
        }
    }
    for(int i=start ;i<s.length() ;i++){
        if(s[i]==' ')
            break;
        total_oranges++;
    }

    return n - total_apples - total_oranges;
}