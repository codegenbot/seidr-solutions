while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

expected_product = int(input("Enter the product of non-zero digits: "))

product = 1
for digit in str(n):
    if digit != '0':
        product *= int(digit)

if product != expected_product:
    print("Wrong answer. Try again!")
else:
    print(product)