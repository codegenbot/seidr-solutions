#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (!sentence.empty() && sentence[0] == 'I') {
                count++;
            }
            sentence.clear();
        } else {
            sentence += c;
        }
    }
    return count;
}