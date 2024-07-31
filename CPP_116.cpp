#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [](int a, int b)->bool{
            if (count(borrowed(a), '1') != count(borrowed(b), '1')) {
                return count(borrowed(a), '1') < count(borrowed(b), '1');
            }
            return a < b;
        });
    return arr;
}

string borrowed(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); ++i)
        s[i] = '0' + s[i];
    return s;
}