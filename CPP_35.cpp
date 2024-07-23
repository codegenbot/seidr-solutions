#include <vector>
#include <algorithm>
using namespace std;

float max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}