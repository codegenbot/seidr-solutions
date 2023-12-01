#include <vector>

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
    using namespace std;

    vector<int> intersperse(vector<int> numbers, int delimeter){
        vector<int> result;
        for(int i = 0; i < numbers.size(); i++){
            result.push_back(numbers[i]);
            if(i != numbers.size()-1){
                result.push_back(delimeter);
            }
        }
        return result;
    }

    // Call the intersperse function
    vector<int> numbers = {1, 2, 3, 4, 5};
    int delimeter = 0;
    vector<int> result = intersperse(numbers, delimeter);

    // Print the result
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}