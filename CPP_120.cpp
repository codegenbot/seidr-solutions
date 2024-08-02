#include <algorithm>
#include <vector>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "[]";
    } else {
        std::vector<int> maximumVector = maximum({1, 2, 3, -23, 243, -400, 0}, n);
        for(int i : maximumVector) {
            cout << i << " ";
        }
    }

    return 0;
}