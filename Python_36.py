def fizz_buzz(n: int):
    return len([i for i in range(1, n+1) if ('11' in str(i) or '13' in str(i)) and '7' in str(i)])