```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int rightmost = arr[n-1];
    for(int i=n-1; i>=0; --i){
        if(arr[i] >= rightmost){
            res.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return res;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9};
    vector<int> output = leaders(input);
    for(int num : output) {
        cout << num << " ";
    }
    return 0;
}