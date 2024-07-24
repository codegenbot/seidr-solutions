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
    vector<int> vec1;
    int n;
    cout << "Enter the number of elements for both vectors: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        vec1.push_back(x);
    }

    vector<int> vec2;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        vec2.push_back(x);
    }

    if(checkVectorEquality(vec1,vec2)) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }

    return 0;
}