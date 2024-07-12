#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y' && s.length() - 1 == std::string(s).find(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    return 0;
}