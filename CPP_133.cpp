using namespace std;

#include <vector>
#include <cmath>

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = ceil(x);
        total += pow(ceil_x,2);
    }
    return total;
}

int main() {
    vector<float> numbers = {1.5, 2.3, 3.7};
    cout << "Sum of squares: " << sum_squares(numbers) << endl;
    return 0;
}