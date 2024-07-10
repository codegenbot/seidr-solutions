#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    int max_right = vec.back();
    for(int i=n-1; i>=0; i--){
        if(vec[i] >= max_right){
            res.push_back(vec[i]);
            max_right = vec[i];
        }
    }
    return res;
}

int main() {
    vector<int> input;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    vector<int> result = leaders(input);
    cout << "Leaders: ";
    for(auto x : result) {
        cout << x << " ";
    }
    cout << endl;
}