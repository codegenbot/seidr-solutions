#include <vector>
#include <algorithm>
#include <stdexcept>
#include <initializer_list>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
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

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;

}

int main_test() {
    vector<int> test = {1, 2, 3, 2, 4, 3, 5};
    try{
        assert (areEqual(remove_duplicates(test), vector<int>{1, 2, 3, 4, 5}) );
    }catch(runtime_error e){
        cout << "Error: " << e.what() << endl;
    }
    return 0;