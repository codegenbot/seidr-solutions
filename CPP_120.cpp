#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int main() {
    vector<int> arr;
    int k;
    cout << "Enter the size of array: ";
    cin >> k;
    cout << "Enter elements of array: ";
    for(int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return 0;
}