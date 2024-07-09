#include <vector>
#include <iostream>
using namespace std;

bool isSame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    return true;
}

int main() {
    vector<float> input;
    float num;
    cout << "Enter numbers (or 'q' to stop): ";
    while(cin >> num && num != 'q') {
        input.push_back(num);
    }
    
    if(input.size() > 0) {
        vector<float> output = get_positive(input);
        cout << "Positive numbers: ";
        for(float i : output)
            cout << i << " ";
        cout << endl;
        cout << "Are the positive numbers same as input? " << (isSame(input, output) ? "Yes" : "No") << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0) 
            result.push_back(i);
    }
    return result;
}