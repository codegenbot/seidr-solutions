#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

int main() {
    vector<float> l;
    cout << "Enter numbers separated by space: ";
    for (float num; cin >> num;) {
        l.push_back(num);
    }
    
    vector<float> result = get_positive(l);
    if (!result.empty()) {
        cout << "Positive numbers are: ";
        for (float num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No positive numbers found." << endl;
    }
    
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}