def fizz_buzz(n):
    count = 0
    seen = set()
    for i in range(1, n+1):
        if i % 11 == 0 and i % 13 == 0 and '7' in str(i):
            count += 1
            seen.add(i)
    return len(seen)