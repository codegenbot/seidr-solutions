import math

while True:
    try:
        n = int(input("Enter a single digit integer: ").strip())
        if n <= 0 or n >= 10:
            raise ValueError("Please enter a single digit integer.")
        
        result = math.prod(map(int, str(n)))
        print(result)
        break
        
    except ValueError as e:
        print(e)
    except Exception as e:
        print("Invalid input. Please enter a valid single digit integer.")