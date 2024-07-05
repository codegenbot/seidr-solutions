def fizz_buzz(n):
    count = 0
    seen = set()
    for i in range(1, n+1):
        if (i % 3 == 0 and '7' in str(i)) or (i % 5 == 0 and '7' in str(i)):
            if i not in seen:
                count += 1
                seen.add(i)
    return count