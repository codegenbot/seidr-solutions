Here is the Python solution for the Fizz-Buzz problem:

def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return 'FizzBuzz'
    elif x % 3 == 0:
        return 'Fizz'
    elif x % 5 == 0:
        return 'Buzz'
    else:
        return str(x)