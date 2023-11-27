#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    // function implementation
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    // main function implementation
    return 0;
}