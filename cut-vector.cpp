int main()
{
    vector<int> numbers;
    int num;
    
    while (cin >> num)
    {
        numbers.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }
    
    int firstHalfSum = 0;
    int closestDiff = INT_MAX;
    int cutIndex;
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        firstHalfSum += numbers[i];
        int secondHalfSum = sum - firstHalfSum;
        int currentDiff = abs(firstHalfSum - secondHalfSum);
        
        if (currentDiff < closestDiff)
        {
            closestDiff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i)
    {
        cout << numbers[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < numbers.size(); ++i)
    {
        cout << numbers[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}