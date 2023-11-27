#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> make_a_pile(int n){
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    for(int i = 1; i < n; i++){
        if(i % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}

void test_make_a_pile(){
    vector<int> piles = make_a_pile(8);
    assert(piles == vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
}

void test_issame(){
    assert(vector<int>{1, 2, 3} == vector<int>{1, 2, 3});
}

int main(){
    test_make_a_pile();
    test_issame();

    cout << "All tests passed!" << endl;

    return 0;
}