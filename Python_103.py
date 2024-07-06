
def rounded_avg(n, m):
    if n > m:
        return -1
    total = 0
    for i in range(n, m+1):
        total += i
    avg = round(total / (m-n+1))
    return bin(avg)[2:]