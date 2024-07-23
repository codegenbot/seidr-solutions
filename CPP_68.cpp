#include <vector>
#include <climits>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            pair<int, int> temp;
            temp.first = arr[i];
            temp.second = i;
            result.push_back(temp);
        }
    }
    
    return result;

}

int main() {
    vector<int> input;
    // your code to get the input from user
    for(int i=0; i<3; i++) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    
    vector<pair<int, int>> output = pluck(input);
    
    for (const auto &pair : output) {
        cout << pair.first << " at index " << pair.second << endl;
    }
    
    return 0;
}