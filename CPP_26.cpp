#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }
    vector<int> result = remove_duplicates(numbers);
    cout << "The list without duplicates is: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    if(issame(result, {1,4,5})){
        cout << "The output matches the expected output." << endl;
    } else {
        cout << "The output does not match the expected output." << endl;
    }
    return 0;
}