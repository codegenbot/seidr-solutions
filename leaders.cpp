#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersRes = leaders(arr);
    for (int leader : leadersRes) {
        cout << leader << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 1) {
        res.push_back(arr[0]);
        return res;
    } 
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    return res;
}