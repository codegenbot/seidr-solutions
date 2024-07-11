#include <vector>
using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    if (n == 0) return result;

    int leader = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= leader) {
            leader = arr[i];
        }
    }

    result.push_back(leader);
    
    for(int i=0; i<n; i++) {
        if(arr[i] >= leader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> output = leaders(input);
    for(int i:output) cout << i << " ";
    return 0;
}