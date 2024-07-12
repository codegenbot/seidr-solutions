#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string){
    vector<int> result;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i - 1] == 'o') {
                result[result.size() - 1] = 2;
            } else {
                result.push_back(1);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}