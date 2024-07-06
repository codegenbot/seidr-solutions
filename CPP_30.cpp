```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> l) {
    float first = *l.begin();
    for (float num : l) {
        if (num != first)
            return false;
    }
    return true;
}

int main() {
    vector<float> l = {1.0, 2.0, 3.0};
    cout << issame(l) << endl;

    vector<float> get_positive(vector<float> a) {
        vector<float> result;
        for (float num : a) {
            if (num > 0)
                result.push_back(num);
        }
        return result;
    }

    assert(issame(get_positive({1.0, -2.0, 3.0})) == true);
    
    vector<float> positive_nums = get_positive(l);
    cout << "Positive numbers are: ";
    for (float num : positive_nums) {
        cout << num << " ";
    }
    cout << endl;
}