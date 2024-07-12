#include <vector>
#include <algorithm>

bool operator==(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (abs(a[i] - b[i]) > 1e-5f)
            return false;
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<float> input({});
    vector<float> positive = get_positive(input);
    bool same = issame(input, positive);  
    return 0;
}