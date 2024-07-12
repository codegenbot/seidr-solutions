#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    int count = 0;
    for(int i = 0; i < music_string.size(); ++i) {
        if(music_string[i] == 'o') {
            count += 2;
        } else if(music_string[i] == '.') {
            count += 1;
        } else if(music_string[i] == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}