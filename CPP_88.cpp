#include <vector>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> sort_array(vector<int> array) {
        int sum = 0;
        for(int i : array)
            sum += i;

        if(sum % 2 != 0) 
            return vector<int>(array.begin(), array.end());
        else
            return vector<int>(array.rbegin(), array.rend());
    }