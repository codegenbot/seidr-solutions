int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>({1})));
    assert(issame(derivative(std::vector<float>({1})), std::vector<float>{}));
    return 0;
}