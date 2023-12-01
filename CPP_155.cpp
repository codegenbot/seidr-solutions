#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    string num_str = to_string(abs(num));
    
    for(char c : num_str){
        int digit = c - '0';
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    vector<int> result = {even_count, odd_count};
    return result;
}