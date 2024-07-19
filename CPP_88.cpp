#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), greater<int>());
    else
        sort(array.begin(), array.end());
    return array;
}

#define ASSERT_VECTOR_EQ(a, b) assert(equal(a.begin(), a.end(), b.begin(), b.end()))

ASSERT_VECTOR_EQ(sort_array(vector<int>{21, 14, 23, 11}), {23, 21, 14, 11});