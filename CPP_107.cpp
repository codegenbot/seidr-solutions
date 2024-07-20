#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

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

int main() {
    // Test the even_odd_palindrome function
    vector<int> result = even_odd_palindrome(100);
    vector<int> expected = {10, 9};
    if (issame(result, expected)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    return 0;
}