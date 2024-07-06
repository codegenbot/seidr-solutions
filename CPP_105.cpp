#include <vector>
#include <map>
#include <string>

using namespace std;

map<int, string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 

vector<pair<int, string>> by_length(vector<int> arr) {
    vector<pair<int, string>> result;
    for(int i : arr) {
        if(i >= 1 && i <= 9)
            result.push_back({i, numToName[i]});
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    
    vector<pair<int, string>> output = by_length(arr);
    
    for(auto p : output) cout<<p.first<<" -> "<<p.second<<endl;

    return 0;
}