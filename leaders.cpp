#include <vector>
using namespace std;

int main() {
    vector<int> leaders = leaders({1, 3, 4, 2, 5}); 
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int rightMostLeaderIndex = n - 1;
    for(int i=n-2; i>=0; i--) {
        if(arr[rightMostLeaderIndex] <= arr[i]) {
            rightMostLeaderIndex = i;
        }
    }
    
    leaders.push_back(arr[rightMostLeaderIndex]);
    return leaders;
}