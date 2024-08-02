#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int count = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
        } else if (note == '|') {
            beats.push_back(count);
            count = 0;
        } else if (note == '.') {
            count++;
        }
    }
    if (count > 0) {
        beats.push_back(count);
    }
    return beats;
}

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert (is_same(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}