#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leaders_vec = leaders(arr);
    // Do something with the result
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    for(int i=n-1; i>=0; --i){
        res.push_back(arr[i]);
    }

    return res;
}