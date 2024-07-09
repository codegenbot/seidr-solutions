#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string str = to_string(abs(num)); // convert integer to string and take absolute value
    
    for (char c : str) { // iterate over each character in the string
        if (c - '0' % 2 == 0) // check if the digit is even
            result[0]++;
        else
            result[1]++;
    }
    
    return result;
}