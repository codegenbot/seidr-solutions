#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if(n == 0)
        return result;
    
    int rightmost_leader = arr[n - 1];
    result.push_back(rightmost_leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if(arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
            result.push_back(rightmost_leader);
        }
    }
    
    return result;
}

int main() { leaders({16,17,4,3,5,2}); return 0; }