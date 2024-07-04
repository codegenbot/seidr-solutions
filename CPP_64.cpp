#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int vowels_count(const string& s) {
    int count = 0;
    string lowered = s;
    transform(lowered.begin(), lowered.end(), lowered.begin(), ::tolower);
    for (int i = 0; i < lowered.size(); ++i) {
        if (lowered[i] == 'a' || lowered[i] == 'e' || lowered[i] == 'i' || lowered[i] == 'o' || lowered[i] == 'u' || (lowered[i] == 'y' && i == lowered.size() - 1)) {
            ++count;
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    cout << "Test case passed." << endl;
    return 0;
}