```
user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))
except Exception as e:  
    print("Program did not receive expected input. Please enter coefficients separated by spaces.")