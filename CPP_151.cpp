```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; // Declare the list
    float num;
    int count = 0;

    while(count < 5) { 
        cin >> num;
        lst.push_back(num);
        count++;
    }

    cout << "The double difference is: " << double_the_difference(lst) << endl;
    
}