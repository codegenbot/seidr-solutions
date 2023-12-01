#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers);
bool issame(vector<float> a, vector<float> b);

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers){
    float minDiff = INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff){
                minDiff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result = {num1, num2};
    return result;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    
    return 0;
}