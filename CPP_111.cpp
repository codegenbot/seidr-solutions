bool issame(map<char,int> a, map<char,int> b){
    for (const auto& pair : a) {
        if (b.count(pair.first) == 0 || b[pair.first] != pair.second) {
            return false;
        }
    }
    for (const auto& pair : b) {
        if (a.count(pair.first) == 0 || a[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test);

int main() {
    assert (issame(histogram("a") , {{'a', 1}}));
}