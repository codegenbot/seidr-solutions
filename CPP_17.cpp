#include <vector>
#include <cassert>

vector<int> parse_music(string music_string) {
    // Implement the parse_music function here
}

bool issame(vector<int> a, vector<int> b) {
    // Implement the issame function here
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}