bool is_same(std::vector<int> a, std::vector<int> b);

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    is_same(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3});
    return 0;
}