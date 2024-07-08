#include <cassert>

vector<int> parse_music(string music_string) {
    // Implement parse_music function
}

bool issame(vector<int> a, vector<int>b) {
    return a == b;
}

int main() {
    string music_string;
    cin >> music_string;
    
    vector<int> beats = parse_music(music_string);
    
    vector<int> expected_output = {1, 2, 3}; // Example expected output
    
    assert(issame(beats, expected_output));
    
    for (int beat : beats) {
        cout << beat << " ";
    }
    
    return 0;
}