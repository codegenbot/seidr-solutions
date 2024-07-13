def fizz_buzz(n: int):
    """
    Count FizzBuzz multiples up to n.
    
    :param n: The upper limit for counting FizzBuzz.
    :return: The count of FizzBuzz numbers.
    """
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            count += 1
        elif i % 3 == 0:
            s = "Fizz"
            if i % 5 != 0:
                print(s)
            else:
                print("FizzBuzz")
                count += 1
        elif i % 5 == 0:
            s = "Buzz"
            if i % 3 != 0:
                print(s)
            else:
                print("FizzBuzz")
                count += 1
        else:
            print(i)
    return count