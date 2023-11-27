#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
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

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (music_string[i + 1] == '|') {
                beats.push_back(2);
                i++;
            } else {
                beats.push_back(4);
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i++;
        }
    }
    return beats;
}

int main() {
    vector<int> parse_music(string music_string);

    // Test case 1
    string music1 = "o||o|o.";
    vector<int> expected1 = {4, 2, 4, 1};
    vector<int> result1 = parse_music(music1);
    assert(issame(result1, expected1));

    // Test case 2
    string music2 = "o.";
    vector<int> expected2 = {4, 1};
    vector<int> result2 = parse_music(music2);
    assert(issame(result2, expected2));

    return 0;
}