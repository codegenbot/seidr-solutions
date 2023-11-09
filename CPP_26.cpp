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
    vector<int> output;
    sort(numbers.begin(), numbers.end());
    for(int i=0;i<numbers.size();i++){
        if(i+1<numbers.size() && numbers[i]==numbers[i+1]){
            continue;
        }
        output.push_back(numbers[i]);
    }
    return output;
}
