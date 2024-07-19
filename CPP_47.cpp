#include <initializer_list>
#include <vector>
#include <algorithm> 
#include <ostream>
#include <iostream>

using namespace std;

float median(vector<float> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
        return (v[n/2 - 1] + v[n/2]) / 2;
    else
        return v[n/2];
}

cout << median(numbers) << std::endl;