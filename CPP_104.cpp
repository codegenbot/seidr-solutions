#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    // Test Case 1
    vector<int> input1 = {123, 456, 789};
    vector<int> expected_output1 = {123, 789};
    vector<int> output1 = unique_digits(input1);
    assert(output1 == expected_output1);

    // Test Case 2
    vector<int> input2 = {246, 135, 802, 579};
    vector<int> expected_output2 = {135, 579};
    vector<int> output2 = unique_digits(input2);
    assert(output2 == expected_output2);

    // Test Case 3 (Edge case: empty input)
    vector<int> input3 = {};
    vector<int> expected_output3 = {};
    vector<int> output3 = unique_digits(input3);
    assert(output3 == expected_output3);

    // Test Case 4 (Edge case: input contains only even digits)
    vector<int> input4 = {200, 400, 600};
    vector<int> expected_output4 = {};
    vector<int> output4 = unique_digits(input4);
    assert(output4 == expected_output4);

    return 0;
}