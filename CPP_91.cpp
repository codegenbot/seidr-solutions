#include <string>
#include <iostream>
#include <sstream>

int main() {
    std::string S;
    int count = 0;
    std::istringstream iss(S);
    std::string word;

    try {
        while(getline(iss, word, ' ')) {
            if(word.size() > 0 && word[0] == 'I')
                ++count;
        }
    } catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    if(count == 0) {
        std::cout << "No words starting with I found.\n";
    } else {
        std::cout << "Number of words starting with I: " << count << '\n';
    }
}