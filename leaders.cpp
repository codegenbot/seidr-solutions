#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders(arr);
    int n = arr.size();
    for(int i = n-1; i >=0; --i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] < arr[j]){
                break;
            }
        }
        if(j==n) result.push_back(arr[i]);
    }
    for (int i : leaders) {
        cout << i << " ";
    }
    return 0;
}