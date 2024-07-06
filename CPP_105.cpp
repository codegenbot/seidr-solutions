#include <vector>
#include <map>
using namespace std;

vector<pair<int, string>> by_length(vector<int> arr) {
    vector<int> temp;
    for(int i: arr){
        if(i >= 1 && i <= 9)temp.push_back(i);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    map<int, string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 
    for(int i: temp){
        cout << i << " - " << numToName[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    by_length(arr);
}