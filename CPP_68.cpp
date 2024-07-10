```cpp
#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> pluck(const vector<int>& n) {
    vector<int> result;

    for (int x : n) {
        if(x == 7 || x == 9)
            result.push_back(1); 
        else if(x == 1)
            result.push_back(0); 

    }

    return result; 

}

int main() { 
    vector<int> v2;
    int size;
    cin >> size;

    vector<int> v1; // Initialize the vector here

    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        if(x == 7 || x == 9)
            v1.push_back(1); 
        else if(x == 1)
            v1.push_back(0); 

    }

    v2.resize(size);
    vector<int> v3(v2); // Initialize v2 with 'size' default values

    if (issame(pluck(v1), v3))  
        cout << "Arrays are same" << endl;
    else   
        cout << "Arrays are not same" << endl;

}