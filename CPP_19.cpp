#include <algorithm>
#include <sstream>

using namespace std;

string sort_numbers(string numbers) {
    istringstream iss(numbers);
    string num;
    vector<string> nums;
    
    while (iss >> num) {
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    
    stringstream ss;
    for (const auto& n : nums) {
        ss << n << " ";
    }
    
    return ss.str();
}