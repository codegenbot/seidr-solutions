sort(arr.begin(), arr.end());
reverse(arr.begin(), arr.end());
vector<int> result(arr.begin(), arr.begin() + k);
return result;