map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

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

int main() {
    string test = "hello world";
    map<char, int> result = histogram(test);
    assert(result['l'] == 3);
    return 0;
}