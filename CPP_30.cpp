#include <vector>
using namespace std;

// Function declaration before use
vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&](float x){return x == b.front();});
}

int main(){
    assert (issame(get_positive({}) , {}));
    return 0;
}