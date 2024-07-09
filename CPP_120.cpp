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

std::vector<int> maximum(int* arr, int n, int k) {
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;

    for(int i = 0; i < n; i++) {
        Pair p;
        p.first = arr[i];
        p.second = i;
        pq.push(p);
    }

    // Keep popping elements from the priority queue until k elements are popped
    while (!pq.empty() && k--) {
        int idx = pq.top().second;
        pq.pop();
        if (idx < n) {
            arr[idx] = -1;  // Mark this index as processed, don't pop it directly
        }
    }

    int newEnd = std::remove_if(&arr[0], &arr[n], [](int x) { return x == -1; }), end = &arr[n];
    for(int i = newEnd; i < end; i++) {
        arr[i - (newEnd - &arr[0]) + 1] = arr[i]; 
    } 

    for(int i = end; i < n; i++) {
        arr[i] = -1;
    }

    int j = newEnd - &arr[0];
    while(j < end) {
        arr[j++] = -1;
    }

    return std::vector<int>(arr, arr+n);
}

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int* arr = new int[n]; 
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int val;
        std::cin >> val;
        arr[i] = val; 
    }

    std::vector<int> result = maximum(arr, n, k); 

    // Print the final array
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}