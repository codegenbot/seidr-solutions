#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<double> elements, double threshold) {
    for(int i = 0; i < elements.size() - 1; i++) {
        if(abs(elements[i] - elements[i+1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<double> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    
    return 0;
}