def fizz_buzz(n):
    multiples = set()
    for i in range(1, n + 1):
        if i % 11 == 0:
            multiples.add(i)
        elif i % 13 == 0:
            multiples.add(i)
        elif i % 7 == 0:
            multiples.add(i)
    return len(multiples)