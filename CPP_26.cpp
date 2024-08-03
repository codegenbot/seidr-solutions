#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find_if(result.begin(), result.end(), [num](int x) {return x != num;}) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>({1, 2, 3, 4, 5}));
    return 0;
}