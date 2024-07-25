#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> test1 = {1.0, 2.0, 3.0};
    vector<float> test2 = {1.0, 4.0, 9.0};
    assert(issame(derivative(test1), test2));
    assert(issame(derivative(vector<float>{}), vector<float>{}));
    return 0;
}