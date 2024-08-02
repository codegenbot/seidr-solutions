#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

int main(){
    vector<float> v = {1.5, -2.3, 4.7, -8.9};
    vector<float> positive = get_positive(v);

    if(issame(positive, vector<float>({1.5, 4.7})))
        cout << "The vectors are same";
    else
        cout << "The vectors are not same";

    return 0;
}