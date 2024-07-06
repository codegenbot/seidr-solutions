#include<stdexcept>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> v(q);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    int sum = 0;
    for (int i : q)
        sum += i;
    
    if(sum > w || v != q)
        return false;
    
    return true;
}