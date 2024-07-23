```
def fizz_buzz(n: int):
    result = ""
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            result += "FizzBuzz"
        elif i % 11 == 0 and i % 13 == 0:
            str_i = str(i)
            count = str_i.count('7')
            result += "7" * count
        else:
            result += str(i)
    return result