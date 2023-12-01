#include <vector>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers);
bool issame(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers){
    vector<float> result;
    float minDiff = abs(numbers[0] - numbers[1]);
    int index1 = 0;
    int index2 = 1;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff){
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    
    result.push_back(min(numbers[index1], numbers[index2]));
    result.push_back(max(numbers[index1], numbers[index2]));
    
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    
    return 0;
}