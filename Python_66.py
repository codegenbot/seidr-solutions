```
import re
def digitSum():
    n = int(input("Enter a number: "))
    return sum(int(i) for i in str(n))

while True:
    try:
        print(digitSum())
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")