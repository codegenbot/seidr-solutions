def fizz_buzz(n):
    n = int(input("Enter a number: "))
    for i in range(1, n + 1):
        if i % 3 == 0:
            if i % 5 == 0:
                print("FizzBuzz")
            else:
                print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)