#include <vector>
using namespace std;

vector<int> getLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxSoFar = arr.back(); // start with the last element as the initial max

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxSoFar) {
            result.push_back(arr[i]);
            maxSoFar = arr[i]; 
        }
    }

    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = getLeaders(arr);
    //return 0;
}