bool compare_chars(char ch1, char ch2) {
    if (std::isalpha(ch1) && std::isalpha(ch2)) {
        return tolower(ch1) == tolower(ch2);
    } else {
        return false;
    }
}

bool are_words_the_same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!compare_chars(a[i][0], b[i][0])) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(are_words_the_same(select_words("a b c d e f", 4), {"b", "c", "d", "f"}));
    return 0;
}