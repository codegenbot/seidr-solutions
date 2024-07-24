#include <iostream>
#include <ostream>
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
    vector<int> vec1 = {1,2,3,5};
    vector<int> vec2 = {-1,2,3,4};
    
    if(checkVectorEquality(vec1,vec2)) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
    
    return 0;
}