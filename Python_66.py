```
def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) or -1

while True:
    try:
        input_s = str(input("Enter an integer: "))
        print(digitSum(input_s))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")