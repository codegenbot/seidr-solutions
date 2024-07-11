#include <iostream>
#include <vector>
using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if(!has_close_elements(a, 0.5)) cout << "No close elements found!" << endl;
    else cout << "Close elements found!" << endl;
    return 0;
}