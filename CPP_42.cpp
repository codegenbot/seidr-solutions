#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool sameVectors(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> incr_list(const vector<int>& l){
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l[i]+1;
    }
    return result;
}

int main() {
    vector<int> vec1 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> vec2 = incr_list(vec1);
    if(sameVectors(vec1, vec2)){
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
    return 0;