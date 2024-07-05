#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    for (char c : music_string) {
        if (c == ' ') {
            if (note == "o") result.push_back(4);
            else if (note == "o|") result.push_back(2);
            else if (note == ".|") result.push_back(1);
            note.clear();
        } else {
            note += c;
        }
    }
    if (note == "o") result.push_back(4);
    else if (note == "o|") result.push_back(2);
    else if (note == ".|") result.push_back(1);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    
    vector<int> music1 = parse_music(str1);
    vector<int> music2 = parse_music(str2);
    
    cout << (issame(music1, music2) ? "Yes" : "No") << endl;
    
    return 0;
}