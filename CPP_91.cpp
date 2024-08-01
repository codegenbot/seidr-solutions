#include <iostream>
#include <string>
using namespace std;

int is_bored(string S) {
    int boredom_count = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.find("I") != string::npos)
                boredom_count++;
            sentence.clear();
        } else {
            sentence += c;
        }
    }
    return boredom_count;
}

int main() {
    string S;
    cout << "Enter a string of words: ";
    getline(cin, S);
    int result = is_bored(S);
    cout << "Number of boredoms: " << result << endl;
    return 0;
}