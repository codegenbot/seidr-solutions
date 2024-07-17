#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> nums;
    for(int i=0; i<4; i++){
        if(i==0) nums.push_back(1);
        else if(i==1) nums.push_back(-2);
        else if(i==2) nums.push_back(3);
        else nums.push_back(-4);
    } 
    int result = basement(nums);
    if (result != -1) {
        cout << "Basement found at index " << result << endl;
    } else {
        cout << "No negative sum found." << endl;
    }
    return 0;
}