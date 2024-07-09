#include <bits/stdc++.h>
using namespace std;

bool issame(vector<int>& v1,vector<int>& v2){
    return (v1.size() == v2.size()) && equal(v1.begin(),v1.end(),v2.begin());
}

vector<int> sort_array(vector<int>& array) {
    int sum = 0;
    for(int i = 0; i < array.size(); i++)
        sum += array[i];
    
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }
    else{
        sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    vector<int> v1 = {4, 3};
    vector<int> v2 = {1, 5};
    
    if(issame(v1,v2))
        cout<<"Vectors are same\n";
    else
        cout<<"Vectors are not same\n";
    vector<int> array = {10,7,8,9,1,6,4,3,2,5};
    sort_array(array);
    return 0;
}