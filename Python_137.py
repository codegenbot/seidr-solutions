```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) > a else None
    elif isinstance(a, str) and isinstance(b, str):
        return a if float(a.replace(',', '.')) > float(b.replace(',', '.')) else None
    elif a > b:
        return a
    elif b > a:
        return b
    else:
        return None

if __name__ == "__main__":
    a = input("Enter the first value: ")
    b = input("Enter the second value: ")

    result = compare_one(a, b)
    
    if result:
        print(f"{result} is greater than {not result}")
    else:
        print("Both values are equal.")