#include<stdio.h>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<int> v;
    for (int x : arr) {
        if (x >= 1 && x <= 9) {
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<string> res;
    map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                           {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int x : v) {
        res.push_back(m[x]);
    }

    return res;
}