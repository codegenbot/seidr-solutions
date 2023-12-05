
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sort_third(vector<int> l){
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result.push_back(l[i]);
        } else {
            result.insert(result.begin() + i, l[i]);
        }
    }
    return result;
}
int main(){
    vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> output = sort_third(input);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    return 0;
}