```
def fizz_buzz(n):
    count = 0
    for i in range(1, n+1):
        if 'fizz' in [f'{i//3*"fizz"' if i % 3 == 0 else f""}+f'{"buzz"*int(i%5==0)}' for _ in range(n)] or 'buzz' in [f'{i//3*"fizz"' if i % 3 == 0 else f""}+f'{"buzz"*int(i%5==0)}' for _ in range(n)]:
            str_i = str(i)
            if '7' in str_i:
                count += 1
    return count