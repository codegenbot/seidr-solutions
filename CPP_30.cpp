#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main() {
    std::vector<float> vec1 = {1.1, 2.3, 4.5, -3.2};
    std::vector<float> vec2 = {1.1, 2.3};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }

    return 0;
}