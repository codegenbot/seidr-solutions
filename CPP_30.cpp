#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<float> a,vector<float>b){
    return (a.size() == b.size()) && equal(a.begin(),a.end(),b.begin());
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert (issame(get_positive({}) , {}));
    // Rest of your code
}