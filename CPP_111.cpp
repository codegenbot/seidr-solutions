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
    map<char, int> test1 = histogram("hello world");
    map<char, int> expected1 = {{'l', 3}};
    assert(issame(test1, expected1));

    map<char, int> test2 = histogram("apple");
    map<char, int> expected2 = {{'p', 2}};
    assert(issame(test2, expected2));

    return 0;
}