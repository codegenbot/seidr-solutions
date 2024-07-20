#include <vector>

using namespace std;

bool areEqual(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size())
        return false;
    
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    
    return true;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {7, 8, 9};
    
    bool result = areEqual(v1, v2);
    
    if(result) {
        cout << "The two vectors are equal." << endl;
    }
    else
        cout << "The two vectors are not equal." << endl;
    
    return 0;
}