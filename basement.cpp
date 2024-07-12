#include <vector>
using namespace std;

int basement(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    
    for(int i = 0; i<n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        v.push_back(x);
    }
    
    cout << "The basement index is: " << basement(v) << endl;
    return 0;
}