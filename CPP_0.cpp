#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool has_close_elements(vector<double> elements, double threshold) {
    for(int i = 0; i < elements.size() - 1; i++) {
        if(abs(elements[i] - elements[i+1]) <= threshold) {
            return true;
        }
    }
    return false;

int main {
    vector<double> elements(100);  
    double num_elements;
    cin >> num_elements;
    
    for(int i = 0; i < num_elements; i++) {
        double element;
        cin >> element;
        elements[i] = element;
    }

    double threshold;
    cin >> threshold;

    if(has_close_elements(elements, threshold)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}