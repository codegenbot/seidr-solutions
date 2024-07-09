#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_count(int num){
    vector<int> result = {0, 0};
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return (a[0] == b[0] && a[1] == b[1]);
}

int main() {
    vector<int> input;
    int num;
    cin >> num;
    input = even_odd_count(num);

    cout << input[0] << " " << input[1] << endl;
    
    return 0;
}