#include <vector>

using namespace std;

bool has_close_elements(vector<int> numbers, float threshold){
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) < threshold){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};

    assert(has_close_elements(a, 1.5f) == false);
    assert(has_close_elements(a, 1.0f) == true);

    return 0;
}