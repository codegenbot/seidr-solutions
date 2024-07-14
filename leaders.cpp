#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if (n == 0)
        return res;
    
    res.push_back(arr.back());
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr.back())
            res.push_back(arr[i]);
        else
            break;
    }
    
    return res;
}

int main() {
    leaders(vector<int>{16, 17, 4, 3, 5, 2});
    return 0;
}