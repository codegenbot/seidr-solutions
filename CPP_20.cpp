```cpp
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

bool sameVectors(vector<float>& a, vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

float find_closest_elements(vector<float> vec) {
    float min_diff = numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}

int mainDriver(){
    int n;
    cin >> n;
    vector<float> a(n, 0.0f), b(n, 0.0f);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    assert(sameVectors(a, b));
    if(sameVectors(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    
    vector<float> vec(n); 
    float result = find_closest_elements(vec);
    cout << "Closest elements: " << result << endl;
    return 0;
}

int main(){
    mainDriver();
    return 0;
}