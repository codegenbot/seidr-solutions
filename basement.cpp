#include <vector>
using namespace std;

int basement(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += v[j];
            if (sum < 0) return i;
        }
    }
    return -1;
}

int main() {
    // Test cases
    vector<int> test1 = {1, -1};
    cout << basement(test1) << endl;

    vector<int> test2 = {1, -100};
    cout << basement(test2) << endl;

    vector<int> test3 = {2, -1, 100};
    cout << basement(test3) << endl;

    vector<int> test4 = {2, -95, 100};
    cout << basement(test4) << endl;

    vector<int> test5 = {2, -30, 5};
    cout << basement(test5) << endl;
    
    return 0;
}