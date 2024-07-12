```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 31, 34};
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;

    if(n == 1) {
        return arr;
    }

    int last = arr.back();

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= last) {
            result.push_back(arr[i]);
            last = arr[i];
        }
    }

    return result;
}