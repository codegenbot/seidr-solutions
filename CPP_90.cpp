#include <vector>
#include <algorithm>

int next_larger(std::vector<int> nums) {
    int res = -1;
    std::stack<int> st;
    for (int n : nums) {
        while (!st.empty() && st.top() <= n)
            st.pop();
        if (st.empty()) 
            res = n;
        else
            res = st.top();
        st.push(n);
    }
    return res;
}