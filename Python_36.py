def fizz_buzz(n: int):
    count = 0
    for i in range(max(11, 13), n):
        str_i = str(i)
        if any(digit == "7" for digit in str_i):
            count += 1
    return count