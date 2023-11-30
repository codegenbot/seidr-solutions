#include <vector>

vector<int> tri(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(tri(1) == vector<int>{1, 3});
    assert(tri(2) == vector<int>{1, 2, 3});
    assert(tri(3) == vector<int>{1, 2, 3, 8});
    assert(tri(4) == vector<int>{1, 2, 3, 8, 4});
    assert(tri(5) == vector<int>{1, 2, 3, 8, 4, 10});
    assert(tri(6) == vector<int>{1, 2, 3, 8, 4, 10, 5});
    assert(tri(7) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16});
    assert(tri(8) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6});
    assert(tri(9) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12});
    assert(tri(10) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7});
    assert(tri(11) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22});
    assert(tri(12) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9});
    assert(tri(13) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34});
    assert(tri(14) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11});
    assert(tri(15) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40});
    assert(tri(16) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13});
    assert(tri(17) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46});
    assert(tri(18) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15});
    assert(tri(19) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52});
    assert(tri(20) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17});
    assert(tri(21) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17, 58});
    assert(tri(22) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17, 58, 19});
    assert(tri(23) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17, 58, 19, 64});
    assert(tri(24) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17, 58, 19, 64, 21});
    assert(tri(25) == vector<int>{1, 2, 3, 8, 4, 10, 5, 16, 6, 12, 7, 22, 9, 34, 11, 40, 13, 46, 15, 52, 17, 58, 19, 64, 21, 70});

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