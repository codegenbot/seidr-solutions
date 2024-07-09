```cpp
#include <iostream>
#include <vector>
#include <queue>

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

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;

    for(int i = 0; i < arr.size(); i++) {
        pq.emplace(arr[i],i);
    }

    // Keep popping elements from the priority queue until k elements are popped
    while (!pq.empty() && k--) {
        arr.erase(std::remove(arr.begin(), arr.end(), pq.top().first), arr.end());
        pq.pop();
    }

    return arr;
}

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> arr;
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int val;
        std::cin >> val;
        if (!arr.empty()) { 
            arr.push_back(val);
        }
    }

    std::vector<int> result = maximum(arr, k);
    std::cout << "Maximum elements: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}