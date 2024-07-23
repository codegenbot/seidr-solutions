#include <string>

int main() {
    int count = vowels_count("aeiouy");
    cout << "Number of vowels: " << count << endl;
    return 0;
}

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y' && s.back() == c) {
            count++;
        }
    }
    return count;
}