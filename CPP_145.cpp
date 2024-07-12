#include <algorithm>
#include <vector>

bool isEqual(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int getAscendingOrder(const std::vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

bool isMonotonic(const std::vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int order = getAscendingOrder({0,6,6,-76,-21,23,4});
    std::vector<int> a({0,6,6,-76,-21,23,4}), b;
    for(int num: a) {
        b.push_back(num);
    }
    sort(b.begin(),b.end()); // Sort the array
    int points = getAscendingOrder(b);
    if(isEqual(a,b)) { 
        cout << "The order is monotonic";
    } else if(order == 1) {
        cout << "The order is not monotonic but has same points";
    } else {
        cout << "The order is not monotonic and does not have same points";
    }
    return 0;
}