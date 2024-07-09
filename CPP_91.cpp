#include <string>

int is_bored(string S) {
    int boredom_count = 0;
    string sentence;

    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.find("I") != std::string::npos) {
                boredom_count++;
            }
            sentence.clear();
        } else {
            sentence += c;
        }
    }

    return boredom_count;
}