def fizz_buzz(x):
    s = ""
    if x % 3 == 0: 
        s += "Fizz"
    if x % 5 == 0:
        s += "Buzz"
    return s or str(x)