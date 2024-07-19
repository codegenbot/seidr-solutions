#include <vector>

int even_odd_count(std::vector<int> v) {
    int even_count = 0;
    int odd_count = 0;
    
    for (int num : v) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return even_count - odd_count;
}

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    if (issame(vec1, vec2)) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not Equal" << std::endl;
    }

    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}