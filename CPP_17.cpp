std::vector<int> parse_music(std::string music_string) {
    std::vector<int> parsed_music;
    int count = 0;

    for (char c : music_string) {
        if (c == 'o') {
            count++;
        } else if (c == '.'){
            parsed_music.push_back(count);
            count = 0;
        }
    }
    if (count > 0) {
        parsed_music.push_back(count);
    }

    return parsed_music;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}