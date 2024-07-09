#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int hex_key(string num) {
    int count = 0;
    string primes = "2357BD";
    
    transform(num.begin(), num.end(), num.begin(), ::toupper);

    for (char c : num) {
        if (primes.find(c) != string::npos) {
            count++;
        }
    }
    
    return count;
}