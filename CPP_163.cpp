#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // Sample usage
    std::vector<int> vec1 = generate_integers(1, 10);
    std::vector<int> vec2 = generate_integers(1, 10);

    if(issame(vec1, vec2)) {
        std::cout << "Vectors contain the same elements." << std::endl;
    } else {
        std::cout << "Vectors do not contain the same elements." << std::endl;
    }

    return 0;
}