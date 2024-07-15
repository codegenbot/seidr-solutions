sort(arr.begin(), arr.end());
arr.erase(remove_if(arr.begin(), arr.end(), [](int num) { return num < 1 || num > 9; }), arr.end());
reverse(arr.begin(), arr.end());

map<int, string> numToString = {
    {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
};

vector<string> result;
for (int num : arr) {
    result.push_back(numToString[num]);
}
return result;