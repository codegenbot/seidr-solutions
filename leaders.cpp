#include <vector>
using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    vector<int> result;

    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    std::vector<int> leadersResult = leaders(arr);
    return 0;
}