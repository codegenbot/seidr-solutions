#include <vector>
using namespace std;
long long double_the_difference(vector<float> lst);

int main() {
    vector<float> input_list; 
    float odd_sum = 0.0f; 

    cout << "Enter the numbers (space-separated): ";
    for(int i=0; ;i++){
        float x; cin >> x;
        if(cin.fail()){
            break;
        }
        input_list.push_back(x);
    }

    odd_sum = double_the_difference(input_list);

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