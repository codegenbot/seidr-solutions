def fizz_buzz(n):
    fizzes = 0
    buzzes = 0
    nums = 0

    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            buzzes += 1
        elif i % 5 == 0:
            print("Buzz")
            buzzes += (i % 3 != 0)  
        elif i % 3 == 0:
            print("Fizz")
            fizzes += (i % 5 != 0)  
        else:
            print(i)
            nums += 1

    return fizzes, buzzes, nums