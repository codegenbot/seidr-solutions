#include <iostream>
#include <string>
#include <algorithm>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    int n = sentence.length();
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            if (std::find(std::begin(prime), std::end(prime), word.length()) != std::end(prime)) {
                result += word + " ";
            }
            start = i + 1;
        }
    }

    if (!result.empty()) {
        result.pop_back(); // remove the extra space at the end
    }

    return result;
}

int main() {
    assert(words_in_sentence("here is") == "is");

    return 0;
}