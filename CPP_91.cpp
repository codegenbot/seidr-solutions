```cpp
#include <string>
#include <algorithm>

int is_bored(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == 'I' && (s.find('.') != std::string::npos || s.find('?') != std::string::npos || s.find('!') != std::string::npos)) {
            count++;
        }
    }
    return count;
}

int main() {
    string S;
    int pos = 0;
    int count = 0;

    cin >> S;

    while ((pos = S.find("I", pos)) != std::string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }

    int is_bored_count = is_bored(S);

    cout << "Count of 'I' followed by '.', '?' or '!' is: " << count << endl;
    cout << "Is bored: " << (is_bored_count > 0) << endl;

    return 0;
}