#include <vector>
#include <initializer_list>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int max_right = arr[arr.size() - 1];
    for(int i = arr.size()-1; i>=0; i--) {
        if(arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr);
    for (auto leader : leadersVector) {
        cout << leader << endl;
    }
    return 0;
}