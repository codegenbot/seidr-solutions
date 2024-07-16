map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    for (const auto& pair : counts) {
        result[pair.first] = pair.second;
    }
    return result;
}

int main() {
    assert(histogram("a") == map<char, int>{{'a', 1}});
    return 0;
}