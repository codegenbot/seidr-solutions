#include <string>

string get_closest_vowel(string word) {
    string closest = "";
    int min_diff = INT_MAX;

    for (int i = 0; i < word.length(); i++) {
        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') ||
            (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')) {
            int diff = i;
            if (diff < min_diff) {
                min_diff = diff;
                closest = string(1, word[i]);
            }
        }
    }

    return closest;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = get_closest_vowel(input);
    if (output.length() > 0) {
        cout << "The closest vowel is: " << output << endl;
    } else {
        cout << "No vowels found." << endl;
    }

    return 0;
}