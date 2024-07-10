#include<stdexcept>

vector<float> sortVector(vector<float> l) {
    vector<float> sortedL = l;
    std::sort(sortedL.begin(), sortedL.end());
    return sortedL;
}

float median(vector<float> l) {
    vector<float> sortedL = sortVector(l);
    int n = sortedL.size();
    if (n % 2 == 0) {
        float mid1 = sortedL[n / 2 - 1];
        float mid2 = sortedL[n / 2];
        return (mid1 + mid2) / 2;
    } else {
        return sortedL[n / 2];
    }
}