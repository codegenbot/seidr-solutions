int main 
{
    vector<float> numbers;
    float num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    cout << calculateMedian(numbers) << endl;

    return 0;
}