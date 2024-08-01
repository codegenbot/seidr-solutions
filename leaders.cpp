#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        while(i<n-1 && arr[i]>=arr[n-1]) {
            n--;
        }
        res.push_back(arr[i]);
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}

int main() {
    // Example usage:
    vector<int> input = {0};
    vector<int> output = leaders(input);
    for(int num: output) {
        cout << num << " ";
    }
    cout << endl;
    
    input = {1, 0};
    output = leaders(input);
    for(int num: output) {
        cout << num << " ";
    }
    cout << endl;
    
    input = {1, 451};
    output = leaders(input);
    for(int num: output) {
        cout << num << " ";
    }
    cout << endl;
    
    input = {2, 1000, 0};
    output = leaders(input);
    for(int num: output) {
        cout << num << " ";
    }
    cout << endl;
    
    input = {2, 0, 1000};
    output = leaders(input);
    for(int num: output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}