#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;

}

int main() {
    std::vector<float> input; 
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        input.push_back(x);
    }
    
    float output = double_the_difference(input);
    cout << "The sum of squares is: " << output << endl;
    return 0;
}