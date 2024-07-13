def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            count += 1
        elif i % 5 == 0:
            if i % 3 == 0:
                print("FizzBuzz")
                count += 1
            else:
                print("Buzz")
                count += (i // 5) > (i // 15)
        elif i % 3 == 0:
            print("Fizz")
        else:
            print(i)
    return count