#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    vector<int> indices;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        indices.push_back(num);
    }
    int minIndex = *min_element(indices.begin(), indices.end());
    cout << "GCD of indices: " << gcd(minIndex, minIndex) << endl;
    return 0;
}