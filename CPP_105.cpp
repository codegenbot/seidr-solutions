```cpp
#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 

vector<pair<int, string>> by_length(vector<int> arr){
    vector<pair<int, string>> result;
    for(int i: arr){
        if(i >= 1 && i <= 9)result.push_back({i, numToName[i]});
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    int n; cout << "Enter number of elements: ";
    cin >> n; vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element[" << i + 1 << "]: "; 
        cin >> arr[i];
    }
    vector<pair<int, string>> res = by_length(arr);
    for(auto p : res) {
        cout << "Length: " << p.first << ", Name: " << p.second << endl;
    }
}