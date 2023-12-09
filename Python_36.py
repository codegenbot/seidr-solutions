def fizz_buzz(n):
    count = 0
    seen = set()
    for i in range(1, n+1):
        if i % 11 == 0 or i % 13 == 0:
            if '7' not in str(i) and i not in seen:
                count += 1
                seen.add(i)
    return count