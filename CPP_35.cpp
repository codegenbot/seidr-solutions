#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main() {
    vector<float> numbers;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        float num;
        cout << "Enter element "<<i+1<<":";
        cin >> num;
        numbers.push_back(num);
    }
    
    if(!numbers.empty()) {
        cout << "The maximum element is: " << max_element(numbers) << endl;
    } else {
        cout << "No elements entered." << endl;
    }

    return 0;
}