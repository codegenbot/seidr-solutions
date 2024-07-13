#include <vector>
#include <iostream>

using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    if(n == 0) return res;

    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) res.push_back(arr[i]);
    }

    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 7, 1};
    vector<int> leadersRes = leaders(arr);
    for(int i : leadersRes) {
        cout << i << " ";
    }
    return 0;
}