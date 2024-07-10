#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for(int i=1; i<vec.size(); i++) {
        if(abs(vec[i]-vec[0]) <= minDiff) {
            minDiff = abs(vec[i]-vec[0]);
            pos = i;
        }
    }
    
    return {{}, {}};
}