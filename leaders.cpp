#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        int j;
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                break;
            }
        }
        if(j == n) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    return leaders(vector<int>{}); 
}