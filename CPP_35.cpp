#include <algorithm>
#include <cmath>

int solution(vector<int> l) {
    return abs(*max_element(l.begin(), l.end()));
}