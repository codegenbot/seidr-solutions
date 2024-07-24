#include <vector>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); i++) {
        int count = 0;
        for (int j = 0; j < b.size(); j++) {
            if (b[j] == num) {
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}