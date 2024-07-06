```cpp
#include <vector>
using namespace std;

vector<pair<int, string>> by_length(vector<int> arr) {
    vector<pair<int, string>> result;
    map<int, string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 
    for(int i: arr){
        if(i >= 1 && i <= 9)result.push_back({i, numToName[i]});
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {5,2,8,4};
    vector<pair<int, string>> output = by_length(arr);
    for (const auto& pair : output) {
        cout << "Number: " << pair.first << ", Name: " << pair.second << endl;
    }
    return 0;
}