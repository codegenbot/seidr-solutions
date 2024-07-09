```cpp
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    assert(sameVectors(a, b));
    if(sameVectors(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}

float closestElements(vector<float> vec) {
    float min_diff = numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}

bool sameVectors(vector<float>& a, vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}