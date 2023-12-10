int main(void)
{
    vector<int> nums;
    int i = 0;
    cin >> i;
    while (i--)
    {
        int j = 0;
        cin >> j;
        nums.push_back(j);
    }
    leaders(nums);
}