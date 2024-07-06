
def fizz_buzz(n):
    count = 0
    multiples = set()
    for i in range(1, n+1):
        if i % 11 == 0 and i % 13 == 0:
            multiples.add(i)
    return len(multiples)
```