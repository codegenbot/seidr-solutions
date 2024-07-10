#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += arr[j];
            if (sum < 0)
                return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0 ; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    cout << basement(v) << endl;

    return 0;
}