#include <algorithm>
#include <cmath>

int maxElement(vector<int> l) {
    if(l.empty()) {
        cout << "Error: The list is empty." << endl;
        return -1;
    }
    return abs(*max_element(l.begin(), l.end()));
}