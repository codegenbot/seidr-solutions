#include <vector>
#include <cstdlib>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main() {
    // Write your own test cases here
    vector<int> test1 = {1, 2, 3, 4, 5};
    vector<int> result1 = incr_list(test1);
    assert(result1 == vector<int>({2, 3, 4, 5, 6}));

    vector<int> test2 = {10, 20, 30, 40, 50};
    vector<int> result2 = incr_list(test2);
    assert(result2 == vector<int>({11, 21, 31, 41, 51}));

    vector<int> test3 = {0, 0, 0, 0, 0};
    vector<int> result3 = incr_list(test3);
    assert(result3 == vector<int>({1, 1, 1, 1, 1}));

    return EXIT_SUCCESS;
}