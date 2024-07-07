#include <algorithm>
#include <cmath>

double largestMagnitude(vector<complex<double>> l) {
    if(l.empty()) {
        throw runtime_error("Input list is empty");
    }
    
    return abs(*max_element(l.begin(), l.end()));
}