#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> l = {1, 2, 3, 4, 5};
    vector<int> result = incr_list(l);
    vector<int> expected = {2, 3, 4, 5, 6};
    bool same = issame(result, expected);
    if(same) {
        cout << "The result is correct." << endl;
    } else {
        cout << "The result is incorrect." << endl;
    }
    return 0;
}