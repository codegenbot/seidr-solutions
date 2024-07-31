#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements() {
    vector<double> elements;
    double threshold;
    
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        double x;
        cin >> x;
        elements.push_back(x);
    }
    
    cout << "Enter the threshold: ";
    cin >> threshold;
    
    for(int i = 0; i < elements.size() - 1; i++) {
        if(abs(elements[i] - elements[i+1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << (has_close_elements() ? "The elements have at least one close pair." : "The elements do not have any close pairs.") << endl;
    return 0;
}