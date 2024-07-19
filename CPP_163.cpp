std::vector<int> issame(std::vector<int> a) {
    std::vector<int> result;
    for (int i : a) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}
int main() {
    assert(!issame(generate_integers(17, 89)).empty());
    return 0;
}