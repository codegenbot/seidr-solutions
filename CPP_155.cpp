#include <iostream>
#include <vector>
#include <string>
#include <cmath>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_count(int num);

int main() {
    int num;
    cin >> num;
    vector<int> result = even_odd_count(num);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}

vector<int> even_odd_count(int num){
    vector<int> result(2, 0);
    string num_str = to_string(abs(num));
    
    for(char c : num_str){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}