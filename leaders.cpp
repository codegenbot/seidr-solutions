#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
    
    result.push_back(arr[n-1]);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > result.back()) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
}