#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if(n == 0) 
        return result;
    
    int max_right = arr[n-1];
    result.push_back(max_right);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}