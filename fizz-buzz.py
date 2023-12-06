Solve the following code contest problem: fizz-buzz. Problem description: Given an integer x, return "Fizz" if x is divisible by 3, "Buzz" if x is divisible by 5, "FizzBuzz" if xis divisible by 3 and 5, and a string version of x if none of the above hold..
Currently, the code is 
```
def fizz_buzz(x):
    if x % 3 == 0 or x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)
``` 
Modify the code as  
The issue with the current code is that it only checks if the number is divisible by 3 or 5, and not both. To fix this, you can add an additional condition to check if the number is divisible by both 3 and 5 before returning "FizzBuzz". Here's the updated code:
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
```.