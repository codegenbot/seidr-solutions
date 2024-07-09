#include <string>
#include <vector>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    int beats = 4; // default beat for a whole note
    
    for (char c : music_string) {
        if (c == 'o') {
            result.push_back(beats);
        } else if (c == '|') {
            beats /= 2;
        } else if (c == '.') {
            beats = 1;
        }
    }
    
    return result;
}