#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    return temp;
}

int main() {
    assert (sort_vector({2,4,8,16,32}) == vector<int>({2, 4, 8, 16, 32}));
    return 0;
}