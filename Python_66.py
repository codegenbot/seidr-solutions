```
def digitSum(s):
    s = s.lower()
    total = sum(int(c) for c in s if c.isdigit())
    return total

while True:
    try:
        input_string = str(input("Enter a string: "))
        result = digitSum(input_string)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter a string.")