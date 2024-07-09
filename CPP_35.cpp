#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<float> v(n);
    for (float &val : v) 
        val = abs(val); // Read input here
    float result = max_element(v);
    cout << fixed << showpoint << setprecision(6) << result << endl;
    
    return 0;
}