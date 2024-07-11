```
while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

product = 1
for digit in str(n):
    if digit != '0':
        product *= int(digit)
print(product)