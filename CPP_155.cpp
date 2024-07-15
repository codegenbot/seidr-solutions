#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_count(int num){
    vector<int> result(2, 0);
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

int main() {
    // Test the even_odd_count function
    vector<int> input = {12345, 2468, 13579};
    for(int num : input){
        vector<int> count = even_odd_count(num);
        cout << "Number: " << num << " | Even Count: " << count[0] << " | Odd Count: " << count[1] << endl;
    }

    // Test the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << "Are vectors a and b same? " << (issame(a, b) ? "Yes" : "No") << endl;

    return 0;
}