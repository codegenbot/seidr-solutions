from functools import reduce

def digits(n):
    if n <= 0:
        return 0
    
    return reduce(lambda x, y: x*y, (int(d) for d in str(n) if int(d) % 2 != 0), 1)

while True:
    try:
        n = int(input("Enter a number: "))
        if n <= 0:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer.")

result = digits(n)
print(result)