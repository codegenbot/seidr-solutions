#include <iostream>
#include <vector>
using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '.' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

int main() {
    vector<int> a = {1, 2, 4};
    vector<int> b = parse_music("o|o|o");
    if (areEqual(a, b)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
}