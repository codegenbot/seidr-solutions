#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    int index = -1;
    for(int i=0; i<v.size()-1; i++) {
        if(abs(v[i]-v[i+1]) <= min_diff) {
            min_diff = abs(v[i]-v[i+1]);
            index = i;
        }
    }
    vector<int> left(v.begin(), v.begin()+index+1);
    vector<int> right(v.begin()+index, v.end());
    return {left, right};
}