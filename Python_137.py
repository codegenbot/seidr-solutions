```
def compare_numbers():
    num1 = input("Enter the first number: ")
    num2 = input("Enter the second number: ")

    if isinstance(num1, str) and isinstance(num2, (int, float)):
        return float(num1.replace(',', '.')) if float(num1.replace(',', '.')) > float(num2) else float(num2)
    elif isinstance(num2, str) and isinstance(num1, (int, float)):
        return float(num2.replace(',', '.')) if float(num2.replace(',', '.')) > num1 else num1
    else:
        if float(num1) > float(num2):
            return float(num1)
        elif float(num2) > float(num1):
            return float(num2)
        else:
            return None