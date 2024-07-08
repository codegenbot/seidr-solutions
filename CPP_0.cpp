#include <vector>
using namespace std;

int main() {
    vector<double> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    
    bool has_close_elements(vector<double> vec, double threshold) {
        for(int i = 0; i < vec.size() - 1; i++) {
            if(abs(vec[i] - vec[i+1]) <= threshold)
                return true;
        }
        return false;
    }

    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);

    return 0;
}