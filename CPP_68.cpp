```cpp
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;

    for(int i = 0; i < arr.size(); i++) {
        int count = 0;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] % 2 == 0) {
                count++;
            }
        }
        
        if(count > 0) {
            result.push_back(i);
        } else {
            result.push_back(-1);
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {});
    return 0;
}