import math

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: ").strip())
        if n <= 0:
            raise ValueError("Please enter a positive integer greater than zero.")
        
        result = math.prod(int(digit) for digit in str(n) if digit != '0')
        print(result)
        break
        
    except ValueError as e:
        print(e)
    except Exception as e:
        print("Invalid input. Please enter a valid positive integer.")