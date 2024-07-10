#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int smallestEvenValue = INT_MAX, smallestIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestEvenValue != INT_MAX) result.push_back({smallestEvenValue, smallestIndex});
    
    return result;
}

int main() {
    vector<int> input = {4,2,3};
    vector<pair<int,int>> output = pluck(input);
    for(auto x : output){
        cout << "{ " << x.first << ", " << x.second << " }" << endl;
    }
    return 0;
}