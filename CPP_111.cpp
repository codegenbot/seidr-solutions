#include <cassert>
#include <string>
#include <map>

using namespace std;

map<char, int> buildHistogram(string test) {
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            counts[letter]++;
            letter = "";
        }
    }
    if (!letter.empty()) counts[letter]++;
    return counts;
}

int main() {
    assert(buildHistogram("a") == map<char, int>{{'a', 1}});
    return 0;
}