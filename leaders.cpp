#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (rightmost < arr[i]) {
            rightmost = arr[i];
        } else {
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}