```
def compare_one():
    num1 = float(input("Enter first number: "))
    num2 = input("Enter second number (integer or decimal): ")

    if isinstance(num1, str) and isinstance(num2, (int, float)):
        num2 = str(num2).replace('.', '').replace(',', '.')
    elif isinstance(num2, str) and isinstance(num1, (int, float)):
        num1 = str(num1).replace('.', '').replace(',', '.')

    if num1 > num2:
        return num1
    elif num1 < num2:
        return num2
    else:
        return None

print(compare_one())