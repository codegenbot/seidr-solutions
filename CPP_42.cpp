#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b);

int main() {
    if (incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) == vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }
    return 0;
}

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}