#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        if (a[0] != b[0]) {
            return a[0] < b[0];
        } else {
            return a[1] > b[1];
        }
    });
    return result;
}

int main() {
    std::vector<std::vector<int>> a = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> b = {{1, 2}, {3, 4}};

    bool result = issame(a, b);
    return 0;
}