```cpp
#include <iostream>
#include <vector>
#include <queue>

struct Pair {
    int first;
    int second;
};

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<std::vector<int>>& arr, int k) {
    struct Compare {
        bool operator()(const std::pair<int,int>& a, const std::pair<int,int>& b) const {
            return a.first < b.first;
        }
    };
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, decltype(Compare{})> pq(Compare());

    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            pq.push({arr[i][j], i});
        }
    }

    // Keep popping elements from the priority queue until k elements are popped
    while (!pq.empty() && k-- > 0) {
        int idx = pq.top().second;
        pq.pop();
        if (idx < arr.size()) {
            for(int j = 0; j < arr[idx].size(); j++) {
                arr[idx][j] = -1;  // Mark this index as processed, don't pop it directly
            }
        }
    }

    std::vector<int> result;
    for(auto i : arr) {
        for(auto val : i) {
            if(val != -1) {
                result.push_back(val);
            }
        }
    }
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<std::vector<int>> arr; 
    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element at index " << i << ": ";
        std::cin >> val;
        int m; std::cout << "Enter the number of columns: "; std::cin >> m; arr.push_back(std::vector<int>(m, val));
    }

    std::vector<int> result = maximum(arr, k);

    // Print the final array
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}