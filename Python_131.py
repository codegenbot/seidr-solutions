import math

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: ").strip())
        if n <= 0:
            print("Please enter a positive integer greater than zero.")
            continue
        if n > 10**9:
            print("Please enter a positive integer less than or equal to 10^9.")
            continue
        if n > 10**18:
            print("Please enter a positive integer less than or equal to 10^18.")
            continue
        
        result = math.prod(map(int, str(n)))
        print(result)
        break
    
    except ValueError:
        print("Invalid input. Please enter a positive integer greater than zero.")