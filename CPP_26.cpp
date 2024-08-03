#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++) if(a[i]!=b[i]) return false;
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        bool found = false;
        for(int j=0; j<result.size(); j++){
            if(numbers[i] == result[j]){
                found = true;
                break;
            }
        }
        if(!found){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}