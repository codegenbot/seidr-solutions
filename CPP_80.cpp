#include <string>
using namespace std;

bool is_happy(string s) {
    long long num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    
    if (num == 1)
        return true;
    
    set<long long> seen;
    while (true) {
        long long next = 0;
        while (num > 0) {
            long long digit = num % 10;
            next = next * 10 + digit;
            num /= 10;
        }
        if (next == 1)
            return true;
        
        if (seen.find(next) != seen.end())
            return false;
        
        seen.insert(next);
        num = next;
    }
}