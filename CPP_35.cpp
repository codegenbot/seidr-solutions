#include <iostream>
#include <vector>
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
    vector<float> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    cout << "Maximum number: " << max_element(numbers) << endl;
    return 0;
}