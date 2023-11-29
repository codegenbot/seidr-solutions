#include <vector>

vector<int> sort_array(vector<int> arr);

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
    // ...

}

int main() {
    // ...

    assert (issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));

    // ...
}

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}