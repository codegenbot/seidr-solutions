
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if str(i).count("7") > 0 and (i % 11 == 0 or i % 13 == 0):
            count += 1
        elif i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
    return count