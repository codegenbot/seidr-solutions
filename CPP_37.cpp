```
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evens;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evens.push_back(l[j]);
                }
            }
            sort(evens.begin(), evens.end());
            result[i] = evens[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> arr = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> evens;
    for (auto x : arr) {
        if(x % 2 == 0) evens.push_back(x);
    }
    sort(evens.begin(), evens.end());
    cout<< "Evens: ";
    for(auto x:evens) cout<<x<<" ";
    vector<float> odds;
    for (auto x : arr) {
        if(x % 2 != 0) odds.push_back(x);
    }
    sort(odds.begin(), odds.end());
    cout<< "\nOdds: ";
    for(auto x:odds) cout<<x<<" ";
    
}