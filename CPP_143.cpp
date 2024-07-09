```cpp
#include <iostream>
#include <string>

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

std::string words_in_sentence(string sentence) {
    std::string result = "";
    size_t start = 0;
    while (start < sentence.size()) {
        size_t end = sentence.find(' ', start);
        if (end == string::npos) {
            result += sentence.substr(start);
            break;
        }
        result += sentence.substr(start, end - start) + " ";
        start = end + 1;
    }
    return result;
}