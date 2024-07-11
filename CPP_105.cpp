```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    vector<string> by_length(vector<int> numbers) {
        vector<int> numbers;
        for (int num : numbers) {
            if (num >= 1 && num <= 9) {
                numbers.push_back(num);
            }
        }
        
        sort(numbers.begin(), numbers.end());
        
        reverse(numbers.begin(), numbers.end());
        
        vector<string> result;
        for (int num : numbers) {
            switch (num) {
                case 1:
                    result.push_back("One");
                    break;
                case 2:
                    result.push_back("Two");
                    break;
                case 3:
                    result.push_back("Three");
                    break;
                case 4:
                    result.push_back("Four");
                    break;
                case 5:
                    result.push_back("Five");
                    break;
                case 6:
                    result.push_back("Six");
                    break;
                case 7:
                    result.push_back("Seven");
                    break;
                case 8:
                    result.push_back("Eight");
                    break;
                case 9:
                    result.push_back("Nine");
                    break;
            }
        }
        
        return result;
    }

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<string> output = by_length(arr);
    
    for (const auto& str : output) {
        cout << str << endl;
    }
    
    return 0;
}