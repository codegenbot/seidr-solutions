#include <vector>

bool issame(vector<int> a, vector<int> b){
    // function implementation here
}

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i > 0){
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main(){
    // code logic here

    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));

    // additional code
    return 0;
}