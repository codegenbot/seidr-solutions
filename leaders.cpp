```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for(int i = arr.size() - 1; i >= 0; --i){
        bool is_leader = true;
        for(int j = i + 1; j < arr.size(); ++j){
            if(arr[i] <= arr[j]){
                is_leader = false;
                break;
            }
        }
        if(is_leader){
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() { return 0; }