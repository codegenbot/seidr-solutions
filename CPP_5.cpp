#include <vector>

vector<int> intersperse(vector<int> numbers, int delimeter);

bool issame(vector<int> a, vector<int> b);

int main() {
    // Test cases
    vector<int> numbers = {1, 2, 3, 4, 5};
    int delimeter = 0;
    vector<int> result = intersperse(numbers, delimeter);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << issame(a, b) << endl;

    vector<int> c = {1, 2, 3};
    vector<int> d = {1, 2, 4};
    cout << issame(c, d) << endl;

    return 0;
}

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimeter);
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