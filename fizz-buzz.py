Solve the following code contest problem: Fizz Buzz.
Given an integer x, return "Fizz" if x is divisible by 3, "Buzz" if x is divisible by 5, "FizzBuzz" if xis divisible by 3 and 5, and a string version of x if none of the above hold.
Currently, the code is:
```
def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 
```
Modify the code to fix this issue. You can fix this issue by adding an additional condition to the first if statement to check if x is divisible by both 3 and 5. If x is divisible by both, then it should return "FizzBuzz" instead of just "Fizz". Here's the updated code:
```
def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)