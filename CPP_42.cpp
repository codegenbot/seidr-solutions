#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l){
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 4};

    std::vector<int> incremented_vec = incr_list(vec1);

    if (issame(vec1, incremented_vec)) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    return 0;
}