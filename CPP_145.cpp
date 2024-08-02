vector<int> order_by_points(vector<int> nums);

bool issame(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        int temp_a = abs(num);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
    }
    
    for (int num : b) {
        int temp_b = abs(num);
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
    }
    
    return sum_a == sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    
    return nums;
}

int main() {
    vector<int> numbers = {123, 321, 456, 789};
    
    sort(numbers.begin(), numbers.end(), issame);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    
    cout << endl;
    
    numbers = order_by_points(numbers);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}