```
def digitSum(n):
    return sum(int(c) for c in str(n))

while True:
    try:
        n = int(input("Enter a number: "))
        if n > 0:
            print(digitSum(n))
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("That's not a valid input. Please try again!")