bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_music(std::string music_string);

int main() {
    assert(parse_music("o| .| o| .| o o| o o|") == std::vector<int>({2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}