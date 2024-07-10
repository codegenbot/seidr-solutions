n = 0
p = 0

while True:
    try:
        n = int(input("Enter the value of n: "))
        p = int(input("Enter the value of p: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

result = modp(n, p)

print(f"The result is {result}")