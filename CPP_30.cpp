#include <vector>
#include <iostream>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (size_t i = 0; i < v1.size(); ++i)
        if (std::abs(v1[i] - v2[i]) > 0.001f)
            return false;
    return true;
}

std::vector<std::vector<float>> get_positive(const std::vector<std::vector<float>>& vecs) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vecs) {
        std::vector<float> pos_v;
        for (float f : v)
            if (f > 0.0f)
                pos_v.push_back(f);
        if (!pos_v.empty())
            result.push_back(pos_v);
    }
    return result;
}

int main() {
    std::vector<std::vector<float>> vectors;

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

    std::vector<std::vector<float>> result = get_positive(vectors);

    for (const auto& v : result) {
        for (float f : v) {
            std::cout << f << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}