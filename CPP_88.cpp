#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sort_array(vector<int> array){
    if((array[0] + array[array.size()-1]) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }
    else{
        sort(array.begin(), array.end());
    }
    return array;
}