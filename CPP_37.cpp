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
    std::vector<float> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
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
    
    std::vector<float> expected = { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10 };
    bool isSame = checkEquality(result, expected);
    assert(isSame);
    return 0;
}