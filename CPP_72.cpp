#include <vector>
#include <iostream>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    int n = q.size();
    
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }
    
    for (int num : q) {
        sum += num;
    }
    
    return sum <= w;
}

int main() {
    vector<int> q;
    int w, element, size;
    
    cout << "Enter the size of the vector: ";
    cin >> size;
    
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; ++i) {
        cin >> element;
        q.push_back(element);
    }
    
    cout << "Enter the maximum weight: ";
    cin >> w;
    
    if (will_it_fly(q, w)) {
        cout << "Yes, it will fly." << endl;
    } else {
        cout << "No, it won't fly." << endl;
    }

    return 0;
}