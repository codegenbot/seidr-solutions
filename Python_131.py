import math

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: ").strip())
        if n <= 0:
            print("Please enter a positive integer greater than zero.")
            continue
        
        result = math.prod(map(int, str(abs(n))))
        print(result)
        break
    
    except ValueError:
        print("Invalid input. Please enter a positive integer greater than zero.")