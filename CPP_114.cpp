```cpp
long long minSubArraySum(vector<long long> nums); 

int main() {
    long long input;
    vector<long long> numbers;
    
    cout << "Enter the number of elements: ";
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        cout << "Element " << i+1 << ":";
        cin >> numbers.push_back(i);
    }
    
    cout << "\nMinimum Subarray Sum is: " << minSubArraySum(numbers) << endl;
}

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            current_sum = 0;
        }
    }

    return min_sum;
}