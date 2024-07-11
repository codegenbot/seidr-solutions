#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    for(int i = 0; i < arr.size(); i++) {
        if(i == arr.size() - 1 || arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    return result;
}

int main() { leaders(vector<int>{5,7,3,5,3,2}); return 0; }