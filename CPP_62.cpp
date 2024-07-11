#include <vector> // Include the vector header

bool issame(std::vector<float> a, std::vector<float> b) { // Specify std::vector<float> for vectors
    return a == b; // Compare vectors for equality
}

std::vector<float> derivative(std::vector<float> xs) { // Specify std::vector<float> for vectors
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
    return 0;
}