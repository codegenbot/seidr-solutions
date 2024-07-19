#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        throw runtime_error("Vectors are not of the same size");
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            throw runtime_error("Vectors are not equal");
        }
    }
    return true;
}

vector<int> uniqueNumbers(vector<int> numbers) {
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;

}

int main() {
    vector<int> test = {1, 2, 3, 2, 4, 3, 5};
    assert (same(uniqueNumbers(test), uniqueNumbers(test)) );
    return 0;
}