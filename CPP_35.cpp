#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<float> l(n);
    for(int i=0; i<n; i++){
        float x;
        cin >> x;
        l[i] = abs(x); 
    }

    cout << "Max element is: " << max_element(l) << endl;
    
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