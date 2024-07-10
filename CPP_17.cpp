#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string){
    vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}

int main() {
    string input_music;
    cin >> input_music;
    vector<int> parsed_result = parse_music(input_music);
    
    vector<int> b = {1, 2, 3, 4};
    
    bool result = issame(parsed_result, b);
    
    cout << std::boolalpha << result << endl;

    assert(issame(parsed_result, {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}