```cpp
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <cassert>

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
    vector<float> a(n), b(a);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    assert(sameVectors(a, b));
    if(sameVectors(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    
    vector<float> vec = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    float result = find_closest_elements(vec);
    cout << "Closest elements: " << result << endl;
    assert(sameVectors(a, b));
    if(find_closest_elements({2.2f, 3.1f}) == find_closest_elements(vector<float>{1.1f, 2.2f, 3.1f, 4.1f, 5.1f})) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}