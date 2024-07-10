#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

bool same = issame(vec1, vec2);

std::cout << "Are the vectors the same? " << (same ? "Yes" : "No") << std::endl;

return 0;