#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string temp;
    
    // Extract the number of apples and oranges from the string
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.find("oranges", pos) == string::npos)
            break;
        int numApples = 0, numOranges = 0;
        for (int i = 0; i < 7; i++) {
            if (s[pos + i] >= '0' && s[pos + i] <= '9')
                numApples = numApples * 10 + (s[pos + i] - '0');
            else
                break;
        }
        pos += 8;
        
        for (int i = 0; i < 7; i++) {
            if (s.find("oranges", pos) != string::npos && s[pos + i] >= '0' && s[pos + i] <= '9')
                numOranges = numOranges * 10 + (s[pos + i] - '0');
            else
                break;
        }
        
        // Calculate the number of mangoes
        int numMangoes = n - numApples - numOranges;
        return numMangoes;
    }
    
    return 0; // Return 0 if no apples and oranges are found in the string
}