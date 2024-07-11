#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_array(vector<int> array){
    vector<int> sorted = array;
    if((sorted.front() + sorted.back()) % 2 == 0){
        sort(sorted.begin(), sorted.end(), greater<int>());
    } else {
        sort(sorted.begin(), sorted.end());
    }
    return sorted;
}