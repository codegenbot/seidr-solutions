[PYTHON]
def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 5 == 0:
        return "Buzz"
    elif x % 3 == 0:
        return "Fizz"
    else:
        return str(x)
[/PYTHON]
[TESTS]
# Test case 1:
assert fizz_buzz(1) == "1"
# Test case 2:
assert fizz_buzz(3) == "Fizz"
# Test case 3:
assert fizz_buzz(5) == "Buzz"
# Test case 4:
assert fizz_buzz(759890) == "Buzz"
[/TESTS]
