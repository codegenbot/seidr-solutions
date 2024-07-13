#include <iostream>
#include <vector>

using namespace std;

int n = nums.size();
int cutIndex = n / 2;
for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " ";
cout << endl;
for (int i = cutIndex + 1; i < n; i++) cout << nums[i] << " ";
cout << endl;