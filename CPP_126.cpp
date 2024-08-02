#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            int count = 1;
            for(int j = i + 1; j < lst.size(); j++){
                if(lst[j] == lst[i]){
                    count++;
                }else{
                    break;
                }
            }
            if(count > 1){
                return false;
            }
        }
    }
    return true;
}