#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x);

bool is_same(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            if((temp % 10) % 2 == 0){
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
    vector<int> input = {123, 456, 789, 135, 246, 802};
    vector<int> expected_output = {135, 789};
    vector<int> actual_output = unique_digits(input);
    
    if(is_same(expected_output, actual_output)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}