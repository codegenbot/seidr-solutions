int main() {
    int result = skjkasdkd({127, 97, 8192});
    if(result == -1) 
        cout << "Error! Input vector is empty." << endl;
    else
        cout << "The sum of the last digits of the prime numbers in the input array is: " << result << endl;
    
    return 0;
}