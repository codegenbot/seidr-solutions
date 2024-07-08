std::vector<std::vector<float>> vectors;

int main() {
    for (int i = 0; i < 5; ++i) {
        std::vector<float> v;
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        while(num != -1.0f) {
            v.push_back(num);
            std::cout << "Enter next element (or -1 to finish): ";
            std::cin >> num;
        }
        vectors.push_back(v);
    }

    std::vector<std::vector<float>> result = filter_vectors(vectors);

    for (const auto& v : result) {
        for (float f : v) {
            std::cout << f << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}