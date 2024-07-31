#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(std::string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i - 1] == 'o') {
                beats[beats.size() - 1] = 2;
            } else {
                beats.push_back(2);
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    assert(parse_music("o| .| o| .| o o| o o|") == vector<int>({2, 1, 2, 1, 4, 2, 4, 2}));
}