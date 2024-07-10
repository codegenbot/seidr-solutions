#include <vector>
using namespace std;

int basement(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += v[j];
            if (sum < 0)
                return i;
        }
    }
    return -1;
}

int main() {
    // Your code to read input and test the function
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << basement(v) << endl;
    return 0;
}