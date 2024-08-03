#include <vector>
#include <iostream>
#include <assert.h>
#include <algorithm>

using namespace std;

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i = 1; i <= n; ++i){
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if(num == rev_num){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

vector<int> test_result = even_odd_palindrome(1);
assert(test_result[0] == 0 && test_result[1] == 1);

test_result = even_odd_palindrome(10);
assert(test_result[0] == 6 && test_result[1] == 4);

test_result = even_odd_palindrome(100);
assert(test_result[0] == 60 && test_result[1] == 40);

test_result = even_odd_palindrome(1000);
assert(test_result[0] == 540 && test_result[1] == 460);

cout << "All test cases passed." << endl;

return 0;