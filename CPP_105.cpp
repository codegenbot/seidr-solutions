#include <vector>
using namespace std;

vector<pair<int, string>> by_length(vector<int> arr) {
    vector<int> temp;
    for(int i: arr){
        if(i >= 1 && i <= 9)temp.push_back(i);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<pair<int, string>> result;
    map<int, string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 
    for(int i: temp){
        result.push_back({i, numToName[i]});
    }
    return result;
}

int main() {
    vector<int> input;
    cout << "Enter numbers (1-9) separated by space and press Enter when done:\n";
    int x;
    while((cin >> x) && (x >= 1 && x <= 9)) {
        input.push_back(x);
    }
    vector<pair<int, string>> output = by_length(input);
    cout << "Result: ";
    for(auto p : output) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}