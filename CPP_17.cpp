#include <vector>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> notes;
    for (char c : music) {
        if (c == 'o') {
            notes.push_back(2);
        } else if (c == '|') {
            notes.push_back(1);
        } else if (c == ' ') {
            notes.push_back(4);
        }
    }
    return notes;
}