#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](float x) { return std::find(b.begin(), b.end(), x) != b.end(); });
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    assert(std::issame(get_positive({}), {})); 
    return 0;
}