import math

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            print("Please enter a positive integer.")
            continue
        
        result = math.prod(map(int, str(n)))
        print(result)
        break
    
    except ValueError:
        print("Invalid input. Please enter a positive integer.")