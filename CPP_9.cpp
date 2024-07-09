// Include missing header <climits> for INT_MIN
#include <climits>

// Change parameter types in issame function to use fully qualified std::vector
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Add 'std::' qualifier in front of 'vector' in the issame function definition
std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}