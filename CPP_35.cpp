#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<float> l;
    float max = 0.0;
    
    cout << "Enter the elements of the vector (enter 'q' to quit):" << endl;
    
    while(true) {
        string s;
        cin >> s;
        
        if(s == "q") break;
        
        float f;
        cin >> f;
        
        l.push_back(f);
        
        max = max_element(l);
        
        cout << "Maximum element so far: " << max << endl;
    }
    
    return 0;
}

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}