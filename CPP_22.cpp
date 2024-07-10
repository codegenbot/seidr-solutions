#include <vector>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integer(vector<int> values) {
    vector<int> result;
    for (int value : values) {
        if(value != 0) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    int num1, num2; 
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    vector<int> vector1 = {num1};
    vector<int> vector2 = {num2};

    if(issame(vector1, vector2)) {
        cout << "Vectors are same." << endl; 
    }
    else {
        cout << "Vectors are not same." << endl;
    }

    vector<int> values = {1, 0, 3, 4};
    vector<int> filtered = filter_integer(values);
    for (int value : filtered) {
        cout << value << " ";
    }
    cout << endl;

    assert(vector<int>({1, 1, 1}) == vector<int>({1, 1, 1}));
    return 0;
}