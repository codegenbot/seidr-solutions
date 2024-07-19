from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y, (int(d) for d in str(n)), 1)

while True:
    n = input("Enter a number: ")
    if n.isdigit() and int(n) > 0:  # Check if input is a positive integer
        break
    print("Invalid input. Please enter a valid positive integer greater than zero.")

result = digits(int(n))
print(result)