#include <algorithm>
#include <cmath>

int maxElement(vector<int> l) {
    if(l.empty()) {
        throw runtime_error("Error: The list is empty.");
    }
    
    return abs(*max_element(l.begin(), l.end()));
}