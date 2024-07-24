```cpp
#include <iostream>
#include <vector>

using namespace std;

bool checkVectorEquality(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        cout << "Error: The two vectors must be the same size." << endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            cout << "Error: The two vectors are not the same." << endl;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec1(n);
    vector<int> vec2(n);

    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        vec1[i] = x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        vec2[i] = x;
    }

    if(checkVectorEquality(vec1,vec2)) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }

    return 0;
}