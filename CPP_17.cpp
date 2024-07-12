#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> note_counts;
    int current_count = 0;
    for (char note : music_string) {
        if (note == 'o') {
            current_count++;
        } else if (note == '|') {
            note_counts.push_back(current_count);
            current_count = 0;
        } else if (note == '.') {
            continue;
        }
    }
    note_counts.push_back(current_count); // For the last note
    return note_counts;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}