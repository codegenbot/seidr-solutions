def fizz_buzz(x):
    return str(x).replace(str(int(x) % 3), "").replace(str(int(x) % 5), "Buzz").replace("0", "Fizz")