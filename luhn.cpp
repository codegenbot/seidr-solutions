#include <vector>
using namespace std;

int luhn(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if ((i % 2) == 1) {
            int temp = v[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += v[i];
        }
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << luhn(v) << endl;
    return 0;
}