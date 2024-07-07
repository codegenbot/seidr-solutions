#include <vector>
using namespace std;
long long double_the_difference(vector<float> lst);

int main() {
    vector<float> input_list; // Define the input list
    float odd_sum = 0.0f; // Initialize the odd sum variable

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        float x;
        cin >> x;
        input_list.push_back(x);
    }

    cout << double_the_difference(input_list) << endl;

    return 0;
}

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0){
            sum += pow(int(x), 2);
        }
    }
    return sum;
}