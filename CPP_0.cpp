#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<float> v, float threshold) {
    for(int i = 1; i < v.size(); i++) {
        if(abs(v[i] - v[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a;
    float temp;
    
    while (cin >> temp) {
        a.push_back(temp);
    }

    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);

    return 0;
}