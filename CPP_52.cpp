// Test case 1: Threshold is higher than all numbers in the vector
std::vector<int> test_input1 = {10, 20, 30};
assert(!below_threshold(test_input1, 40));

// Test case 2: Threshold is equal to the largest number in the vector
std::vector<int> test_input2 = {5, 10, 15};
assert(!below_threshold(test_input2, 15));

// Test case 3: Threshold is lower than all numbers in the vector
std::vector<int> test_input3 = {7, 8, 9, 10};
assert(below_threshold(test_input3, 5));

// Test case 4: Threshold is negative and all numbers are positive
std::vector<int> test_input4 = {100, 200, 300, 400};
assert(!below_threshold(test_input4, -50));