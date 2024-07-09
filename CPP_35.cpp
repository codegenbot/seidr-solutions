Here is the completed code:

#include <algorithm>

float max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}