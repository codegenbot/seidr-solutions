#include <unordered_set>
int hex_key(string num){
    unordered_set<char> prime_hex_digits = {'2', '3', '5', '7', 'B', 'D'};
    int count = 0;
    for (char c : num) {
        if (prime_hex_digits.count(c)) {
            count++;
        }
    }
    return count;
}