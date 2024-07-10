#include <vector>
using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int i : lst) {
        if(i < 0 && i > max_negative) {
            max_negative = i;
        } else if(i > 0 && i < min_positive) {
            min_positive = i;
        }
    }

    vector<int> result;
    if(!issame({max_negative}, {0})) {
        result.push_back(max_negative);
    } else {
        result.push_back(0);
    }
    if(!issame({min_positive}, {1})) {
        result.push_back(min_positive);
    } else {
        result.push_back(1);
    }

    return result;
}