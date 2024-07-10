#include <vector>

int add_elements(std::vector<int> elements, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, elements.size()); i++) { 
        if (elements[i] < 10) { 
            sum += elements[i];
        }
    }
    return sum;
}