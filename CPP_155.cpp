#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_count(int num);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
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

int main() {
    // Test the even_odd_count function
    int num;
    cin >> num;
    vector<int> counts = even_odd_count(num);
    for(int count : counts){
        cout << count << " ";
    }
    
    return 0;
}