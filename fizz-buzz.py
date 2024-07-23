def fizz_buzz(x):
    three_divisible = x % 3 == 0
    five_divisible = x % 5 == 0

    if three_divisible and five_divisible:
        return "FizzBuzz"
    elif three_divisible:
        return "Fizz"
    elif five_divisible:
        return "Buzz"
    else:
        return str(x)