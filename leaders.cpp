#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result = {arr.back()}; 
    for (int i = arr.size()-2; i >= 0; i--) {
        if (arr[i] >= result.back()) { 
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl;
    }
    return 0;
}