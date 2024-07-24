def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            count += 1
        print("FizzBuzz" if i % 15 == 0 else ("Fizz" if i % 3 == 0 and i % 5 != 0 else "Buzz" if i % 5 == 0 and i % 3 != 0 else str(i)))
    return count