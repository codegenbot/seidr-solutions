#include <vector>
#include <cassert>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    int size = numbers.size();
    for(int i=0; i<size; i++){
        result.push_back(numbers[i]);
        if(i != size-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}