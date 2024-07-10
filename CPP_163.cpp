std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a + !(a % 2); i <= b; i += 2) {
        result.push_back(i);
    }
    return result;
}