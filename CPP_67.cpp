#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.find("and", pos) != string::npos)
            pos = s.find("and", pos);
        else
            break;
    }
    
    size_t start = pos + 6;
    while (isdigit(s[start])) {
        apples = apples * 10 + (s[start] - '0');
        start++;
    }
    
    pos = 0;
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.find("and", pos) != string::npos)
            pos = s.find("and", pos);
        else
            break;
    }
    
    start = pos + 7;
    while (isdigit(s[start])) {
        oranges = oranges * 10 + (s[start] - '0');
        start++;
    }
    
    return n - apples - oranges;
}

int main() {
    // Test cases
    printf("%d\n", fruit_distribution("5 apples and 6 oranges", 19));
    printf("%d\n", fruit_distribution("0 apples and 1 oranges", 3));
    printf("%d\n", fruit_distribution("2 apples and 3 oranges", 100));
    printf("%d\n", fruit_distribution("100 apples and 1 oranges", 120));

    return 0;
}