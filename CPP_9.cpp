#include <vector>
#include <cassert>

bool issame(const vector<int>& v1, const vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};

    assert(issame(input, expected));

    vector<int> result = rolling_max(input);
    vector<int> output = {1, 2, 3, 4, 5};
    
    assert(issame(result, output));
    
    return 0;
}