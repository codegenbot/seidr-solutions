int main 
{ 
    vector<int> numbers; 
    int num; 
   
    cout << "Enter some numbers (enter -1 when you are done):" << endl; 
   
    do{ 
        cin >> num; 
        numbers.push_back(num); 
    } while(num != -1); 
  
    int result = add(numbers); 
    cout << "Sum of odd-indexed numbers: " << result << endl; 

}