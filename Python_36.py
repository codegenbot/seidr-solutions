def fizz_buzz(n: int):
    output = ""
    for i in range(1, n + 1):
        output += "FizzBuzz" if i % 15 == 0 else ("Fizz" if i % 3 == 0 and i != 15 else "Buzz" if i % 5 == 0 and i % 3 != 0 else str(i))
    return output