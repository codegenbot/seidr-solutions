#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int num : nums) {
        int sum = 0;
        string strNum = to_string(num);
        for (char c : strNum) {
            sum += stoi(string(1, c));
        }
        pairs.emplace_back(sum, num);
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }

    return result;
}