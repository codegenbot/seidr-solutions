
def fizz_buzz(n):
    multiples = set()
    for i in range(1, int(n**0.5) + 1):
        if i % 11 == 0 and i % 13 == 0 and i % 7 == 0:
            multiples.add(i)

    return len(multiples)