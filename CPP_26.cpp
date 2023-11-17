/*
From a vector of integers, remove all elements that occur more than once.
Keep order of elements left the same as in the input.
>>> remove_duplicates({1, 2, 3, 2, 4})
{1, 3, 4}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> remove_duplicates(vector<int> numbers){
    sort(numbers.begin(),numbers.end());
    int s=numbers.size();
    vector<int> s1;
    for(int i=0;i<s-1;i++){
        if(numbers[i]!=numbers[i+1]){
            s1.push_back(numbers[i]);
        }
    }
    s1.push_back(numbers[s-1]);
    return s1;
}
