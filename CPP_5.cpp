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