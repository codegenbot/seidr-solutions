#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num){
    vector<int> result = {0, 0};
    string numStr = to_string(abs(num));
    for (char digit : numStr) {
        if ((digit - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main(){
    assert(even_odd_count(0) == vector<int>{1, 0});
    
    return 0;
}