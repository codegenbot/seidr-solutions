```c++
#include <iostream>
#include <sstream>

using namespace std;

string words_in_sentence(string sentence);

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    string result = words_in_sentence(sentence);
    cout << "The output is: " << result << endl;
    return 0;
}

string words_in_sentence(string sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;

    while (getline(ss, word, ' ')) {
        if (count > 0) {
            cout << ", ";
        }
        cout << word;
        count++;
    }
    return count > 0 ? "The output is: " + word : "";
}