#include <vector>
using namespace std;

int basementIndex(vector<int> &arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> input;
    int n, temp;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        input.push_back(temp);
    }
    cout << basementIndex(input) << endl;
    return 0;
}