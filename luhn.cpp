int* digits = new int[16]; 
int length = 16; 

cin.fill('0'); 
cin >> setw(16) >> digits; 

delete[] digits; 
cout << luhn(digits, length); 

return 0;