#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        bool evenDigit = false;
        
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                evenDigit = true;
                break;
            }
            num /= 10;
        }
        
        if(!evenDigit){
            result.push_back(x[i]);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}