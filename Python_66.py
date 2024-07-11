```
def digitSum(n):
    return sum(int(c) for c in str(n))

while True:
    try:
        n = int(input("Enter a number: "))
        print(digitSum(n))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")