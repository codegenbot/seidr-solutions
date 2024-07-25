#include <vector>
using namespace std;

int solve(vector<int>& v) {
    int sum = 0;
    for (int num : v) {
        int new_num = (num / 3 - 2);
        if(new_num<0)
            new_num=0;
        sum += new_num;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n, temp;
    cin >> n;
    while(n--) {
        cin >> temp;
        v.push_back(temp);
    }
    cout << solve(v) << endl;
    return 0;
}