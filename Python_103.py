
def rounded_avg(n, m):
    if n > m:
        return -1
    sum = 0
    for i in range(n, m+1):
        sum += i
    avg = int(sum/(m-n+1))
    binary = bin(avg)[2:]
    return "0b" + binary