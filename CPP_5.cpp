#include <vector>

bool issame(const vector<int>& vec1, const vector<int>& vec2){
    if(vec1.size() != vec2.size()){
        return false;
    }
    for(int i=0; i<vec1.size(); i++){
        if(vec1[i] != vec2[i]){
            return false;
        }
    }
    return true;
}

vector<int> intersperse(vector<int> numbers, int delimeter);

int main() {
    // Main function code here
}

vector<int> intersperse(vector<int> numbers, int delimeter){ 
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimeter);
        }
    }
    return result;
}