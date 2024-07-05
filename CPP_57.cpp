#include <iostream>
#include <vector>

using namespace std;

bool monotonic(vector<float> l){
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    vector<float> l;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        float x;
        cin >> x;
        l.push_back(x);
    }
    
    if (monotonic(l)) {
        cout << "The list is monotonic." << endl;
    } else {
        cout << "The list is not monotonic." << endl;
    }
    
    return 0;
}