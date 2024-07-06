#include <vector>
#include <iostream>

bool issame(vector<float> a,vector<float>b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<float> l = {1.5, -2.4, 3.7, 9.8};
    vector<float> positive_nums = get_positive(l);

    cout << "Positive numbers: ";
    for (float x : positive_numbers) {
        cout << x << " ";
    }
    cout << endl;

    if(issame(get_positive(l), l)) {
        cout << "The input list is the same as its positive numbers." << endl;
    } else {
        cout << "The input list and its positive numbers are different." << endl;
    }

    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}