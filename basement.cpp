```int main() {
    vector<int> nums = {1, -3, 2, 5, -4};
    int result = basement(nums);
    if (result == -1)
        cout << "No such index exists." << endl;
    else
        cout << "The basement index is: " << result << endl;
    return 0; }```