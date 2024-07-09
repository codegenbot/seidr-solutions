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

std::vector<int> maximum(std::vector<int>& arr, int k) {
    struct Compare {
        bool operator()(const std::pair<int,int>& a, const std::pair<int,int>& b) const {
            return a.first < b.first;
        }
    };
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, decltype(Compare{})> pq(Compare());

    for(int i = 0; i < arr.size(); i++) {
        pq.push({arr[i], i});
    }

    // Keep popping elements from the priority queue until k elements are popped
    while (!pq.empty() && k-- > 0) {
        int idx = pq.top().second;
        pq.pop();
        if (idx < arr.size()) {
            arr[idx] = -1;  // Mark this index as processed, don't pop it directly
        }
    }

    std::vector<int> result;
    for(int i : arr) {
        if(i != -1) {
            result.push_back(i);
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

    std::vector<int> arr; 
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int val;
        std::cin >> val;
        arr.push_back(val);
    }

    std::vector<int> result = maximum(arr, k);

    // Print the final array
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}