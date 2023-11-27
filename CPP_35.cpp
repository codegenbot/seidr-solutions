#include <iostream>
#include <vector>
using namespace std;

float findMax(vector<float> l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maximum){
            maximum = l[i];
        }
    }
    return maximum;
}

int main() {
    cout << (findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) << endl;
    return 0;
}