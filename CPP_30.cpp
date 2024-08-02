#include <vector>
using namespace std;

vector<float> get_positive(vector<float> l);
bool issame(vector<float>, vector<float>);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&](float x){return x == b.front();});
}

int main(){
    assert (issame(get_positive({}) , {}));
    return 0;
}