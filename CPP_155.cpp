#include <iostream>
#include <vector>
#include <string>
#include <cmath>

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
    int num;
    cin >> num;
    vector<int> result = even_odd_count(num);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}