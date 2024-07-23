#include <string>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (char c : s) {
        if ((c >= 'A' && c <= 'E') || (c >= 'I' && c <= 'O') || (c >= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    cout << "Count of uppercase vowels: " << count_upper("HELLO World!") << endl;
    return 0;
}