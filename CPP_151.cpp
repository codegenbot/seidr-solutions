#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2); 
        }
    }
    return sum;
}

int main() {
    vector<float> input_vector; // declare the input vector
    // read user input and store it in the vector
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        float num;
        cin >> num;
        input_vector.push_back(num);
    }

    long long result = double_the_difference(input_vector); 
    cout << "The sum of squares is: " << result << endl;

    return 0;
}