#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    if (number + need > remaining) {
        result.push_back(number + remaining);
        result.push_back(0);
    } else {
        result.push_back(number + need);
        result.push_back(remaining - need);
    }
    
    return result;
}

int main() {
    int number = 5, need = 6, remaining = 10;
    vector<int> result = eat(number, need, remaining);
    
    cout << "Total eaten: " << result[0] << endl;
    cout << "Carrots left: " << result[1] << endl;
    
    return 0;
}