def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n+1) if '117' in str(i) or '137' in str(i) or '177' in str(i))
    return count