#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(const vector<float>& l){
    vector<float> positive_numbers;
    for(float num : l){
        if(num > 0){
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}