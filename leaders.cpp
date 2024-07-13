#include <vector>
using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    if(n == 0) return res;

    res.push_back(arr[n-1]);

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            res.push_back(arr[i]);
        }
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