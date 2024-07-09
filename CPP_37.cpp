#include <vector>
#include <algorithm>
#include <iostream>

bool checkEquality(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sortEven(const std::vector<float>& l) {
    std::vector<float> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back(l[j]);
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<float> vec;
    for (int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        vec.push_back(x);
    }
    
    std::vector<float> result(vec.size()); 
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            result[i] = sortEven(vec)[0];
        } else {
            result[i] = vec[i];
        }
   }
    
    std::vector<float> sortedEven = sortEven(vec);
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            result[i] = sortedEven[0];
            sortedEven.erase(sortedEven.begin());
        } else {
            result[i] = vec[i];
        }
    }
    
    std::vector<float> expected;
    for (float x : vec) {
        if (x % 2.0 == 0.0f) {
            expected.push_back(x);
        }
    }
    std::sort(expected.begin(), expected.end());
    
    assert(checkEquality(result, expected));
    return 0;
}