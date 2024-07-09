```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[a.size()-i-1]) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cout << "Enter element at index " << i << ": ";
        cin >> array[i];
    }

    vector<int> result = sort_array(array);

    if(issame(array, result))
        cout << "Array is the same after sorting" << endl;
    else
        cout << "Array is not the same after sorting" << endl;

    return 0;
}

vector<vector<int>> sort_array(vector<int> array) {
    int first = array.empty() ? 0 : array[0];
    int last = array.empty() ? 0 : array.back();
    if ((first + last) % 2 == 1)
        return {{array}};
    else
        return {{array.rbegin(), array.rend()}};
}