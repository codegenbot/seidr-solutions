#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string);

int main() {
    string input;
    cout << "Enter music string: ";
    getline(cin, input);
    
    vector<int> result = parse_music(input);
    
    cout << "Parsed music beats: ";
    for (int beat : result) {
        cout << beat << " ";
    }
    
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    size_t pos = 0;
    string delimiter = " ";
    while ((pos = music_string.find(delimiter)) != string::npos) {
        string note = music_string.substr(0, pos);
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
        music_string.erase(0, pos + delimiter.length());
    }
    return beats;
}