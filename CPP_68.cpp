#include <vector>
#include <iostream>

// Function signature for count_even
int count_even(int n) {
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            ++count;
        }
    }
    return count;
}

// Function to create a vector of pairs
std::vector<std::pair<int, int>> result(std::vector<int> v) {
    std::vector<std::pair<int, int>> output;
    for (int i = 0; i < v.size(); ++i) {
        output.push_back({v[i], i});
    }
    return output;
}

// Function to check if two vectors are equal
bool checkVectorsEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

// Function to count even numbers from array
std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> output;
    for (int i = 0; i < v.size(); ++i) {
        if ((v[i] % 2 == 0)) {
            output.push_back(v[i]);
        }
    }
    return output;
}

int main() {
    std::vector<int> arr1 = {7, 9, 7, 1};
    //std::vector<std::pair<int, int>> output = result(arr1);
    //for (auto p : output) {
    //    std::cout << "Number: " << p.first << ", Index: " << p.second << std::endl;
    //}
    std::vector<int> evenNumbers = pluck(arr1);
    for (int i = 0; i < evenNumbers.size(); ++i) {
        std::cout << "Even Number: " << evenNumbers[i] << std::endl;
    }
    return 0;
}