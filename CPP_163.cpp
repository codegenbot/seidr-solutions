#include <iostream>
#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool are_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<int> emptyVector;
    std::vector<int> generatedVector = generate_integers(17, 89);

    if (are_same(generatedVector, emptyVector)) {
        std::cout << "The vectors are same." << std::endl;
    }
    else {
        std::cout << "The vectors are different." << std::endl;
    }

    return 0;
}