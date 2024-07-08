#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> findMinEvenNode(std::vector<int> arr) {
        std::vector<std::pair<int, int>> evenNodes;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0) {
                evenNodes.push_back({arr[i], i});
            }
        }

        if (evenNodes.empty()) {
            return {};
        }

        int minEvenValue = evenNodes[0].first;
        int minIndex = evenNodes[0].second;

        for (int i = 1; i < evenNodes.size(); i++) {
            if (evenNodes[i].first < minEvenValue) {
                minEvenValue = evenNodes[i].first;
                minIndex = evenNodes[i].second;
            } else if (evenNodes[i].first == minEvenValue) {
                minIndex = std::min(minIndex, evenNodes[i].second);
            }
        }

        std::vector<std::pair<int, int>> result;
        result.push_back({minEvenValue, minIndex});
        return result;
    }
    
    // Define the pluck function here...
    std::vector<int> pluck(const std::vector<std::pair<int, int>>& arr) {
        std::vector<int> result;
        for (const auto& pair : arr) {
            result.push_back(pair.first);
        }
        return result;
    }
}