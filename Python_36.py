```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        if i % 15 == 0: 
            count += 1
        elif "7" in str(i):
            count += 1
    return count