#include <vector>

bool even_odd_count(std::vector<int> a, std::vector<int> b) {
    size_t even_count_a = std::count_if(a.begin(), a.end(), [](int num) { return num % 2 == 0; });
    size_t odd_count_a = a.size() - even_count_a;
    
    size_t even_count_b = std::count_if(b.begin(), b.end(), [](int num) { return num % 2 == 0; });
    size_t odd_count_b = b.size() - even_count_b;

    return even_count_a == even_count_b && odd_count_a == odd_count_b;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}