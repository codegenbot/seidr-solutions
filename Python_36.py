def fizz_buzz(n):
    fizzes = 0
    buzzes = 0
    nums = 0

    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
        elif i % 5 == 0:
            print("Buzz")
            buzzes += 1
        elif i % 3 == 0:
            print("Fizz")
            fizzes += 1
        else:
            print(i)
            nums += 1

    return fizzes, buzzes, nums