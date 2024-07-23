int eat(int a, int b, int c) {
    return a * b + c;
}

bool areSameVectors(std::vector<int> a, std::vector<int> b) {
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
    assert(areSameVectors(std::vector<int>({36,0})));
    return 0;
}