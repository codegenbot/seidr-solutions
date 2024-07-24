#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::all_of(get_positive({}).begin(), get_positive({}).end(), [](float x){return x > 0;})== {});
    vector<float> l;
    cout << "Enter some numbers (negative to stop): ";
    while(cout >> l) {
        if(l[0] <= 0.0f) break;
        l = get_positive(l);
        cout << "Positive numbers: ";
        for(auto x : l) {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}