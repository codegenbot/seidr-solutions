try:
    n = int(input("Enter a positive integer greater than zero: "))
    if n <= 0 or n > 10**9:
        raise ValueError
     
    print(math.prod(map(int, str(n)))

except ValueError:
    print("Invalid input. Please enter a positive integer greater than zero.")