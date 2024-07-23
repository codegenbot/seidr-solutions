#include <stdio.h>
#include <vector>
#include <unordered_set>
using namespace std;

bool pairs_sum_to_zero(vector<int> l){
    unordered_set<int> s;
    for(int num : l){
        if(s.find(-num) != s.end()){
            return true;
        }
        s.insert(num);
    }
    return false;
}