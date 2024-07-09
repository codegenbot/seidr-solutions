#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b);
vector<float> get_positive(vector<float> l);

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    bool same = true;
    if (!a.empty() && !b.empty()) {
        auto first_a = a[0];
        for (float num : a) {
            if (num != first_a)
                return false;
        }
        for (float num : b) {
            if (num != first_a)
                return false;
        }
        return true;
    }
    return false;
}

int main() {
    vector<float> pos_nums = get_positive({-1, 0, 2, -3, 4});
    // Now you can use your function 'get_positive'
    if (issame(get_positive({}), get_positive(pos_nums))) {
        cout << "The lists are the same";
    } else {
        cout << "The lists are different";
    }
    return 0;
}