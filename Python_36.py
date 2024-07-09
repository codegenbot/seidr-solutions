```
def fizz_buzz(n):
    count = 0
    for i in range(1, n+1):
        if '7' in str(i) and ('fizz' in str(i//3*"fizz"*'' + "buzz"*int(i%5==0)) or 'buzz' in str(i//3*"fizz"*'' + "buzz"*int(i%5==0))):
            count += 1
    return count