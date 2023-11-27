#include <vector>
#include <cassert>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i=0; i<numbers.size()-1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    if(numbers.size() > 0){
        result.push_back(numbers[numbers.size()-1]);
    }
    return result;
}

int main(){
    vector<int> result = intersperse({2, 2, 2}, 2);
    assert(result == vector<int>{2, 2, 2, 2, 2});
    return 0;
}