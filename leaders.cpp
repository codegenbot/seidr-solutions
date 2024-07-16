#include <iostream>
#include <vector>

using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxRightSoFar = arr.back();

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 1, 5};
    std::vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}