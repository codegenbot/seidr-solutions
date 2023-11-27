#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);

    if(issame(output, {0, 2, 3, 5, 9, 123})){
        cout << "Test case passed." << endl;
    }
    else{
        cout << "Test case failed." << endl;
    }

    return 0;
}