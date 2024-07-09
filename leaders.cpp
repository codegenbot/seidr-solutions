#include <vector>

std::vector<int> leaders(std::vector<int>& inputVector) {
    std::vector<int> result;
    int n = inputVector.size();
    int leader = inputVector[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (inputVector[i] >= leader) {
            leader = inputVector[i];
            result.push_back(leader);
        }
    }
    return result;
}