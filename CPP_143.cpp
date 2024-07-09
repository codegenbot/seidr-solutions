#include <iostream>
#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    // Implement your logic here
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = words_in_sentence(sentence);
    cout << "The output is: " << result << endl;

    return 0;
}