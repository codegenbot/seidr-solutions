#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    size_t pos = 0;
    while ((pos = test.find(' ')) != string::npos) {
        char c = test[0];
        int count = 1;
        for (size_t i = 1; i < pos; i++) {
            if (test[i] == c) {
                count++;
            } else {
                break;
            }
        }
        result[c] = count;
        test.erase(0, pos + 1);
    }

    char c = test[0];
    int count = 1;
    for (size_t i = 1; i < test.size(); i++) {
        if (test[i] == c) {
            count++;
        } else {
            break;
        }
    }
    result[c] = count;

    return result;
}