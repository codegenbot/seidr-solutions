```cpp
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(maxPrime < i) maxPrime = i;
        }
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;

}

int main() {
    vector<int> input;
    cout << "Enter a series of integers (space-separated): ";
    string line; 
    getline(cin, line);
    int num;
    for(string::size_type i = 0; i < line.size(); ++i) {
        while(i < line.size() && line[i] == ' ') {
            ++i;
        }
        if(i < line.size()) {
            --i;
            size_t j = line.find(' ', i);
            if(j == string::npos) {
                j = line.size();
            }
            istringstream iss(line.substr(i, j-i));
            while(iss >> num) {
                input.push_back(num);
            }
        }
    }
    cout << "Sum of the digits in the max prime number is: " << skjkasdkd(input) << endl;
}