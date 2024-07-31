#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b);

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
    // Test cases
    vector<int> count1 = even_odd_count(24689);
    vector<int> count2 = even_odd_count(13579);
    
    // Add more test cases as needed
    
    return 0;
}
