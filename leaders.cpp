#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 31};
    vector<int> leadersRes = leaders(arr);
    
    for (int i: leadersRes) {
        cout << i << " ";
    }
    
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxright = arr[n-1];
    res.push_back(maxright);
    
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxright) {
            maxright = arr[i];
            res.push_back(maxright);
        }
    }
    
    return res;
}