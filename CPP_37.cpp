#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> result(l.size());
    int evens_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            for(int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    result[evens_index++] = l[j];
                }
            }
            std::sort(result.begin(), result.begin() + evens_index);
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    std::cout << "Sorted Even: ";
    for (float num : sort_even(input)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}