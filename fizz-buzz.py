```
def fizz_buzz(x):
    output = ""
    if x % 3 == 0:
        output += "Fizz"
    if x % 5 == 0:
        output += "Buzz"
    return output if output else str(x)