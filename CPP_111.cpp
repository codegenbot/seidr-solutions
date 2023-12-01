map<char,int> histogram(string test){
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            counts[letter]++;
            letter = "";
        }
    }
    counts[letter]++;
    return counts;
}

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

int main() {
    assert (issame(histogram("a") , {{'a', 1}}));
    return 0;
}