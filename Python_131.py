import math

while True:
    try:
        n = int(input("Enter a positive integer (0 < n <= 10^18): ").strip())
        if n <= 0 or n > 10**18:
            print("Please enter a positive integer in the specified range.")
            continue
        
        result = math.prod(map(int, str(n)))
        print(result)
        break
    
    except ValueError:
        print("Invalid input. Please enter a positive integer in the specified range.")