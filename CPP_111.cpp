map<char, int> histogram(string test);

map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    return counts;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    map<char, int> testHist = histogram("aba ccc");
    map<char, int> expectedHist = {{'a', 2}, {'b', 1}, {'c', 3}};

    assert(issame(testHist, expectedHist));
    return 0;
}