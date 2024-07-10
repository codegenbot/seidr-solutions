extern "C" {
#include <assert.h>
}

int vowels_count(char str[]) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int result = vowels_count(str);
    cout << "Number of vowels: " << result << endl;
    return 0;
}