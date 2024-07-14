Here is the completed code:

#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if(n == 1) {
        return arr;
    }
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= arr[n-1]) {
            result.push_back(arr[i]);
        }
    }
    
    result.push_back(arr[n-1]);
    
    return result;
}

int main() {
    // Write your test cases here
    vector<int> input = {2, 1000, 0};
    vector<int> output = leaders(input);
    for(int i : output) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}