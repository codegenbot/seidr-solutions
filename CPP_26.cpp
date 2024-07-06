```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int>b){
    return a.size() == b.size();
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool duplicate = false;
        for(int j = 0; j < result.size(); j++){
            if(std::find(result.begin(), result.end(), numbers[i]) != result.end()){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            result.push_back(numbers[i]);
        }
    }
    return result;
}