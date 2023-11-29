#include <vector>
#include <algorithm>
using namespace std;

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}

int main(){
    // Test the sort_array function
    vector<int> input = {5, 2, 8, 1, 9};
    vector<int> sorted = sort_array(input);
    for(int num : sorted){
        cout << num << " ";
    }
    cout << endl;

    // Test the is_same function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    if(is_same(a, b)){
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }

    return 0;
}