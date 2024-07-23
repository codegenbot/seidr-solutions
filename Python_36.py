```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 11 == 0 or i % 13 == 0:
            str_i = str(i)
            if '7' in str_i:
                count += 1
    return count