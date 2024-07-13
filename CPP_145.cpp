```cpp
#include <initializer_list>
using namespace std;
typedef size_t initializer_list<int>::size_type;

int getAscendingOrder(const vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

bool isMonotonic(const vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
        else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

bool isIdentical(const vector<int>& a, const vector<int>& b) { 
    return isMonotonic(a) && isMonotonic(b);
}

int order_by_points(const vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

bool isSame(const vector<int>& a, const vector<int>& b) { 
    return isIdentical(a, b);
}

int main() {
    vector<int> vec1 = {0,6,6,-76,-21,23,4};
    vector<int> vec2 = {-76, -21, 0, 4, 23, 6, 6};
    assert(isSame(vec1,vec2) == true);
    vector<int> vec = {0,6,6,-76,-21,23,4}; 
    int result = getAscendingOrder(vec);
    cout << "order_by_points: " << result << endl;
    assert(isSame(vec1 , vec2));
    return 0;
}