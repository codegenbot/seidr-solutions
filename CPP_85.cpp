int main 
{
    vector<int> numbers;
    int num;
    
    cout << "Enter some numbers (enter -1 when you are done):" << endl;
    
    for(; ;){
        cin >> num;
        if(num == -1) break;
        numbers.push_back(num);
    }

    int result = add(numbers);
    cout << "Sum of odd-indexed numbers: " << result << endl;

    return 0;
}