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
    cin >> n;
    for(int i=0; i<n; i++){
        float num;
        cin >> num;
        numbers.push_back(num);
    }
    
    cout << "Maximum element is: " << max_element(numbers) << endl;
    
    return 0;
}