#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(int(num) > 0 && int(num) == int(num)){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float num;
    cout << "Enter numbers (enter 'stop' when done): ";
    while(true){
        cin >> num;
        if(std::to_string(num) == "stop"){
            break;
        }
        lst.push_back(num);
    }
    long long result = double_the_difference(lst);
    cout << "The doubled difference is: " << result << endl;
    return 0;
}