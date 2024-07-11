```Python
def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(i for i in range(1, min(n+1,m+1)) if i % 2 != 0)
    return bin(int(round(total)))[2:]