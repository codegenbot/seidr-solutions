std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    std::stringstream ss(music);
    std::string token;
    
    while (std::getline(ss, token, '|')) {
        result.push_back(std::count(token.begin(), token.end(), 'o'));
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}