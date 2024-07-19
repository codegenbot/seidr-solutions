import math

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: "))        
        if n < 0:
            print("Please enter a positive integer greater than zero.")
            continue
        elif n == 0:
            print(0)
            break

        result = math.prod(map(int, str(n)))
        print(result)
        break
    
    except ValueError:
        print("Invalid input. Please enter a positive integer greater than zero.")