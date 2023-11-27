#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float findMax(const vector<float>& l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maximum){
            maximum = l[i];
        }
    }
    return maximum;
}

int main() {
    float result = findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    cout << (result - 124) << endl;

    return 0;
}