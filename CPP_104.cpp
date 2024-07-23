#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    set<int> st;
    for (int num : x) {
        int newNum = 0;
        while (num > 0) {
            int digit = num % 10;
            if(digit != 0)
                st.insert(newNum * 10 + digit);
            num /= 10;
        }
    }
    vector<int> result(st.begin(), st.end());
    sort(result.begin(), result.end());
    return result;
}