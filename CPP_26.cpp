#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool found = false;
        for(int j = 0; j < result.size(); j++){
            if(result[j] == numbers[i]){
                found = true;
                break;
            }
        }
        if(!found){
            result.push_back(numbers[i]);
        }
    }
    return result;
}