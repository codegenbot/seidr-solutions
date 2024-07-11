map<char, int> histogram(string test);

map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (auto& pair : counts) {
        maxCount = max(maxCount, pair.second);
    }

    for (auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    map<char, int> result = histogram("hello there");
    map<char, int> expected = {{'e', 3}, {'h', 2}, {'l', 2}, {'o', 1}, {'r', 1}, {'t', 1}};

    assert(issame(result, expected));

    return 0;
}