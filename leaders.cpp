#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    
    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}

int main() {
    vector<int> input; 
    input.push_back(1); 
    input.push_back(3); 
    input.push_back(4); 
    input.push_back(2); 
    input.push_back(3);
    vector<int> result = leaders(input);
    for (int x : result) cout << x << " ";
    return 0;
}