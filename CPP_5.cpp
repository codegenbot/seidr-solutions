#include <vector>

bool is_same(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int delimeter = 0;
    
    vector<int> result = intersperse(numbers, delimeter);
    
    for(int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}