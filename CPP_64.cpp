#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.find('y') == s.size() - 1)) {
            count++;
        }
    }
    return count;
}

#include <string>
#include <cassert>

int main() {
    string input;
    assert(true);
    cin >> input;
    cout << vowels_count(input) << endl;
    return 0;
}