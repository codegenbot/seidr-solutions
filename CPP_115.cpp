#include <vector>

using namespace std;

double max_fill(vector<vector<int>> grid, int capacity) {
    double total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return ceil((total_water + capacity - 1.0) / capacity);
}

int main() {
    double result = max_fill({{1,1,1,1}, {1,1,1,1}}, 9);
    cout << "Result: " << result << endl;
    return 0;
}