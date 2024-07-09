#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fabs(num) == floor(num)) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    float a = 5.6f;
    float b = -7.8f;
    float c = 0.9f;
    float d = 3.4f;
    
    lst.push_back(a);
    lst.push_back(b);
    lst.push_back(c);
    lst.push_back(d);

    int odd_sum = 0; 
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}