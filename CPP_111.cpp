bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(histogram("a") == ({{'a', 1}}));
    // Rest of your code...
}
map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test + " ";
    char prev = ' ';
    int count = 0;

    for (char c : str) {
        if (c == prev) {
            count++;
        } else {
            if (count > 0) {
                result[prev] = count;
            }
            prev = c;
            count = 1;
        }
    }

    return result;
}