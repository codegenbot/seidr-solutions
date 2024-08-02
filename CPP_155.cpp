#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    int count_even = 0;
    int count_odd = 0;
    string str_num = to_string(abs(num));
    
    for (char c : str_num) {
        if (c - '0' % 2 == 0)
            count_even++;
        else
            count_odd++;
    }
    
    vector<int> result;
    result.push_back(count_even);
    result.push_back(count_odd);
    
    return result;
}