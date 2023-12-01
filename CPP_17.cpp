#include <vector>
#include <cassert>
#include <string>

using namespace std;

vector<int> parse_music(const string& music_string){
    vector<int> beats;
    string note;
    for (int i = 0; i < music_string.length(); i++){
        if (music_string[i] == 'o'){
            if (music_string[i+1] == ' '){
                beats.push_back(4);
                i++;
            }
            else if (music_string[i+1] == '|'){
                beats.push_back(2);
                i += 2;
            }
        }
        else if (music_string[i] == '.'){
            if (music_string[i+1] == '|'){
                beats.push_back(1);
                i += 2;
            }
        }
    }
    return beats;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|") , {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}