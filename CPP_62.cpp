#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> derivative(const vector<float>& input){
    vector<float> result(input.size());
    for(size_t i = 0; i < input.size(); ++i){
        result[i] = abs(input[i]);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main(){
    vector<float> input = {1.2, -3.4, 5.6};
    vector<float> result = derivative(input);

    assert(issame(result, {1.2, 3.4, 5.6}));

    return 0;
}