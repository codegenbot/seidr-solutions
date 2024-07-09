#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_count(int num){
    vector<int> result = {0, 0};
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main(){
    // Test the even_odd_count function
    vector<int> count = even_odd_count(12345);
    for(int num : count){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}