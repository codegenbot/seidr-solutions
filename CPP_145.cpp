```cpp
#include <algorithm>
#include <vector>

std::vector<int> order_by_points(int... nums) {
    std::vector<int> myNums;
    for (int n : {nums}) {
        myNums.push_back(n);
    }
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(myNums.begin(), find(myNums.begin(), myNums.end(), a)) -
               distance(myNums.begin(), find(myNums.begin(), myNums.end(), b));
    };
    sort(myNums.begin(), myNums.end(), compare);
    return myNums;
}

int main(){
    std::vector<int> result = order_by_points(0,6,6,-76,-21,23,4);
    assert(std::equal(result.begin(), result.end(),{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}