#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(auto num : x){
        vector<int> digits;
        while(num > 0){
            int digit = num % 10;
            if(find(digits.begin(), digits.end(), digit) == digits.end()){
                digits.push_back(digit);
            }
            num /= 10;
        }
        sort(digits.begin(), digits.end());
        int num_reconstructed = 0;
        for(int d : digits){
            num_reconstructed = num_reconstructed * 10 + d;
        }
        result.push_back(num_reconstructed);
    }
    sort(result.begin(), result.end());
    return result;
}