```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main(){
    int n;
    std::cin >> n;
    std::vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
    }
    if(sameVectors(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}

float closestElements(std::vector<float> vec) {
    float min_diff = std::numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(std::abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = std::abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}

bool sameVectors(std::vector<float>& a, std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}