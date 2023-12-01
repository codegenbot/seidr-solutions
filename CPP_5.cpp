#include <vector>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i != numbers.size()-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers;
    int delimiter;

    // Read numbers from user
    int n;
    while(cin >> n) {
        numbers.push_back(n);
    }
    
    // Read delimiter from user
    cin >> delimiter;
    
    // Call the intersperse function
    vector<int> result = intersperse(numbers, delimiter);
    
    // Output the interspersed numbers
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}