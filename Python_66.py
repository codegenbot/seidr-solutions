```
def digitSum(n):
    return sum(int(c) for c in str(n))

while True:
    try:
        n = int(input("Enter a number: "))
        if n != 0:
            print(digitSum(n))
            break
        else:
            print("Please enter a non-zero integer.")
    except ValueError:
        print("Invalid input. Please enter an integer.")