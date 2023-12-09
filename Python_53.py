Solve the following code contest problem: Python/53. Problem description: Complete the following code given the task description and function signature.
```
def add(x: int, y: int):
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    return x + y
```
Modify the code to fix the syntax error by removing the extra quotation marks and parentheses around the input functions.
Here's the corrected code:

def add(x: int, y: int):
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    return x + y
```
Alternatively, you can also use the input function in a more concise way by using a single statement like this:

def add(x: int, y: int):
    return x + y + int(input("Enter first number: ")) + int(input("Enter second number: "))