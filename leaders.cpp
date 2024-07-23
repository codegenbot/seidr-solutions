#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRightSoFar = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {17, 28, 4, 27, 29, 23, 12};
    vector<int> result = leaders(input);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
}