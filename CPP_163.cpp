#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }
    for (int num : b) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = generate_integers(1, 6);
    std::vector<int> b = generate_integers(4, 9);
    std::vector<int> result = issame(a, b);
    
    assert(result.size() == 5);
    assert(result[0] == 2);
    assert(result[1] == 4);
    assert(result[2] == 6);
    assert(result[3] == 4);
    assert(result[4] == 6);

    return 0;
}