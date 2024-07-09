int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> input(n);

    for (auto &vec : input) {
        int m;
        std::cin >> m;
        for (int i = 0; i < m; i++) {
            float x;
            std::cin >> x;
            vec.push_back(x);
        }
    }

    bool result = true;

    for (const auto &vec : input) {
        if (!is_same(get_positive(vec), get_positive({}))) {
            result = false;
            break;
        }
    }

    return 0;
}