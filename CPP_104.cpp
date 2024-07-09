#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(vector<int> x);

bool issame(vector<int> a, vector<int> b){
    vector<int> result;
    for(int num : a){
        if(find(b.begin(), b.end(), num) != b.end()){
            result.push_back(num);
        }
    }
    return result.size() == a.size() && result.size() == b.size();
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        int temp = num;
        bool hasEvenDigit = false;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main(){
    vector<int> a = {123, 456, 789, 135};
    vector<int> b = {456, 789, 246, 357};
    assert(issame(a, b) == false);

    vector<int> result = unique_digits(a);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}