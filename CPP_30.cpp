#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;

}

int main() {
    assert(get_positive({}).size() == 0);
    return 0;
}