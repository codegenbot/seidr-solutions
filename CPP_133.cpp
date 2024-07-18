#include <vector>

int sum_squares(vector<float> lst){
    int sum = 0;
    for(float num : lst){
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

int main() {
    int result = sum_squares(vector<float>{-1, 1, 0});
    return 0;
}