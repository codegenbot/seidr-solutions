```cpp
#include <iostream>
#include <sstream>

using namespace std;

void words_in_sentence(string sentence);

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    cout << sentence << endl;
    return 0;
}

void words_in_sentence(string) {
}