The task description asks you to write a Python function that takes two numbers as inputs and returns their sum. The code provided by the contest organizers is close to the solution but has some issues:

* The input types are specified incorrectly, they should be 'str' instead of 'int'.
* The `input()` statement needs to take the user-provided data and assign it to x and y. Currently, it is outside of the function and not doing anything.
Here's a fixed version of the code that should pass all test cases:
```python
def add(x: str, y: str) -> int:
    # Read input from the user
    x = input("Enter first number: ")
    y = input("Enter second number: ")
    return int(x) + int(y)
```