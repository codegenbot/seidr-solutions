#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& vec1, const vector<string>& vec2){
    return vec1 == vec2;
}

int main() {
    vector<int> numbers = {5, 2, 9, 4, 3, 8, 1, 7};
    vector<string> result = by_length(numbers);
  
    vector<string> expected = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"};

    assert(issame(result, expected));

    return 0;
}