#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    float odd_sum = 0.0f; 

    int num; 
    while(true){
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if(num == -1) break;
        lst.push_back((float)num);
    }

    odd_sum = double_the_difference(lst); 
    return 0;
}