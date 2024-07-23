def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        str_i = str(i)
        if "7" in str_i:
            count += 1
    return count