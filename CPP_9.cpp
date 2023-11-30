#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int max = numbers[0];
    rollingMax.push_back(max);
    
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        rollingMax.push_back(max);
    }
    
    return rollingMax;
}