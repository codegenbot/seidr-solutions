```
def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m+1))
    avg = round(total / (m-n+1))
    avg_binary = bin(int(str(avg)))  
    return avg_binary[2:]