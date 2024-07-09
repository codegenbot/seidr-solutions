```cpp
#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert (issame(get_positive({}), {})); 
    vector<float> l;
    cout << "Enter elements of the vector (negative to stop): ";
    while(cin >> l.push_back) {
        if(l.back() <= 0) break;
    }
    vector<float> result = get_positive(l);
    cout << "Positive numbers are: ";
    for(float i : result){
        cout << i << " ";
    }
    return 0;
}

vector<std::vector<float>> get_positive(vector<float> l){
    vector<std::vector<float>> result;
    for(float i : l){
        if(i > 0) {
            result.push_back(std::vector<float>(1, i));
        }
    }
    return result;
}