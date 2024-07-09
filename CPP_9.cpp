#include <vector>
#include <climits>

vector<int> rolling_max(vector<int> numbers);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main() {
    // Example usage of rolling_max function
    vector<int> example_numbers = {1, 3, 5, 2, 8, 4, 10};
    vector<int> max_values = rolling_max(example_numbers);

    for(int val : max_values){
        cout << val << " ";
    }

    return 0;
}