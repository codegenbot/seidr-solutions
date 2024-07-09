#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(vector<int> l){
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main(){
    vector<int> input = {1, 2, 3, 4};
    vector<int> modified = incr_list(input);

    vector<int> same_check = {2, 3, 4, 5};
    cout << "Are input and modified vectors the same? " << issame(input, modified) << endl;
    cout << "Are input and same_check vectors the same? " << issame(input, same_check) << endl;

    return 0;
}