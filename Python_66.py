```python
import re
def digitSum():
    while True:
        try:
            n = int(input("Enter a number: "))
            return sum(int(i) for i in str(n))
        except ValueError:
            print("Invalid input. Please enter an integer.")

print(digitSum())