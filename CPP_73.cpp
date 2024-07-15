#include <vector>
#include <string>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    string rev = str;
    reverse(rev.begin(), rev.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != rev[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,3};
    cout << smallest_change(arr);
    return 0;
}