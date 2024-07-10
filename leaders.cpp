#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int maxRightSoFar = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= maxRightSoFar){
            maxRightSoFar = arr[i];
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    vector<int> test = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(test);
    for(int i : result) cout << i << " ";
    return 0;
}