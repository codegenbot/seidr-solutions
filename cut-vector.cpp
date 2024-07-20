#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result(2);
    
    if (n == 0)
        return result;
        
    int left_sum = 0, right_sum = 0;
    
    for (int i = 0; i < n/2; i++) {
        left_sum += v[i];
        right_sum += v[n-i-1];
    }
    
    if (n % 2 == 1)
        result[0] = vector<int>(v.begin(), v.end()-1);
    else
        result[0] = vector<int>(v.begin(), v.end());
        
    result[1].push_back(v.back());
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }

    vector<vector<int>> result = cutVector(v);

    cout << "The resulting subvectors are: " << endl;
    for (int i = 0; i < 2; i++) {
        if (i == 0)
            cout << "Left: ";
        else
            cout << "Right: ";
        
        for (int num : result[i])
            cout << num << " ";
        cout << endl;
    }

    return 0;
}