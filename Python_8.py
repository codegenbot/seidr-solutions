```python
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

sum_product = num1 + num2

def check(n):
    if n % 2 == 0:
        print(f"{n} is even.")
    else:
        print(f"{n} is odd.")