def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):  
        if (i % 3 == 0 and "3" in str(i)) or (i % 5 == 0 and "5" in str(i)):
            count += 1
    return count