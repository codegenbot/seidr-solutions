#include <vector>
using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int lastLeader = arr[n-1];
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= lastLeader) {
            result.push_back(arr[i]);
            lastLeader = arr[i];
        }
    }

    return result;
}

int main() {
    vector<int> arr = vector<int>(16, 17, 4, 3, 5, 2, 8, 9, 1, 3);
    leaders(arr);
    return 0;
}