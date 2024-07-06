```cpp
#include <cassert>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 1; 
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(words_in_sentence("here is").size() == 2);
    return 0;
}