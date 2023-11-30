#include <vector>

vector<int> tri(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(tri(1) == vector<int>{1, 3});
    assert(tri(2) == vector<int>{1, 2, 3});
    assert(tri(3) == vector<int>{1, 2, 3, 8});
    assert(tri(4) == vector<int>{1, 2, 3, 8, 4});
    assert(tri(5) == vector<int>{1, 2, 3, 8, 4, 14});
    assert(tri(6) == vector<int>{1, 2, 3, 8, 4, 14, 6});
    assert(tri(7) == vector<int>{1, 2, 3, 8, 4, 14, 6, 24});
    assert(tri(8) == vector<int>{1, 2, 3, 8, 4, 14, 6, 24, 8});
    assert(tri(9) == vector<int>{1, 2, 3, 8, 4, 14, 6, 24, 8, 34});
    assert(tri(10) == vector<int>{1, 2, 3, 8, 4, 14, 6, 24, 8, 34, 10});

    return 0;
}

vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); // tri(1) = 3

    if(n == 0){
        return result;
    }

    result.push_back(1); // tri(2) = 1 + (2 / 2) = 2

    if(n == 1){
        return result;
    }

    result.push_back(2); // tri(3) = tri(2) + tri(1) + tri(4) = 2 + 3 + 3 = 8

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            result.push_back(1 + i / 2);
        }else{
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }

    return result;
}