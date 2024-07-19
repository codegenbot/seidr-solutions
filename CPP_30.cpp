#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main_func() {
    assert(getPositive({}).size() == get_positive({}).size());
    int n1, n2; 
    std::cout << "Enter the number of elements for first list: ";
    std::cin >> n1;
    float arr1[n1];
    for (int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }
    std::vector<float> l1(arr1, arr1+n1);
    std::cout << "The positive elements of the list are: ";
    for (float f : get_positive(l1)) {
        std::cout << f << " ";
    }
    std::cout << "\n";
    
    int n3, n4; 
    std::cout << "Enter the number of elements for second list: ";
    std::cin >> n3;
    float arr2[n3];
    for (int i = 0; i < n3; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }
    std::vector<float> l2(arr2, arr2+n3);
    if (!issame(l1, l2)) {
        std::cout << "Lists are not the same.\n";
    } else {
        std::cout << "Lists are the same.\n";
    }
    
    return 0;
}