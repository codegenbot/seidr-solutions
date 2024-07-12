#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += ceil(x)*ceil(x);
    }
    return total;

int main() {
    vector<float> input;
    float num;
    
    cout << "Enter numbers (enter -1 to stop): ";
    while(cin >> num) {
        if(num == -1.0f) break;
        input.push_back(num);
   
    
    if(input.empty()) {
        cerr << "Error: No valid input provided." << endl;
        return 1;
    } else {
        int result = sum_squares(input);
        cout << "Sum of squares: " << result << endl;
    }
    
    return 0;
}