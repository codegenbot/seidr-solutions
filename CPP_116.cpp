#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
         [](int a, int b) {
             int ones_a = __builtin_popcount(a);
             int ones_b = __builtin_popcount(b);
             if (ones_a == ones_b)
                 return a < b;
             else
                 return ones_a < ones_b;
         });
    return result;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }
    cout << "Sorted array: ";
    for (int &i : sort_array(arr))
        cout << i << " ";
    cout << endl;
    
    return 0;
}