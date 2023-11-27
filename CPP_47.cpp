#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

float median(vector<float> l){
    sort(l.begin(), l.end());
    int size = l.size();
    if(size % 2 == 0){
        return (l[size/2 - 1] + l[size/2]) / 2;
    }
    else{
        return l[size/2];
    }
}

int main(){
    assert (abs(median({8, 1, 3, 9, 9, 2, 7}) - 7)<1e-4 );
    return 0;
}