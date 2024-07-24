#include <string>

using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t start = 0;
    while (start < S.size()) {
        size_t end = S.find_first_of(".!? ", start);
        if (end == string::npos)
            break;
        string sentence = S.substr(start, end - start);
        if (sentence.substr(0, 2) == "I ")
            count++;
        start = end + 1;
    }
    return count;
}