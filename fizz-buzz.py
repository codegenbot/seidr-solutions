def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        str_x = str(x)
        if str_x.startswith('Fizz'):
            return 'Fizz'
        if str_x.startswith('Buzz'):
            return 'Buzz'
        return str_x