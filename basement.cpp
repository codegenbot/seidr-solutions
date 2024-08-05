#include <vector>

int basementIndex(const std::vector<int>& vec) {
    int sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0) {
            return static_cast<int>(i);
        }
    }
    return -1; // or any other default value you want to return
}