def fizz_buzz(n):
    for i in range(1, int(input()) + 1):
        if i % 3 == 0:
            if i % 5 == 0:
                print("FizzBuzz")
            else:
                print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)
    return n % 15 == 0