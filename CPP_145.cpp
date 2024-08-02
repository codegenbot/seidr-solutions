#include <algorithm>
#include <vector>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int num : nums) {
        int sum = 0;
        for (int digit : to_string(num)) {
            sum += stoi(digit);
        }
        pairs.push_back({sum, num});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }

    return result;
}