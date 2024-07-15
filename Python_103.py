def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    int_avg = round(avg)
    if int_avg % 2 == 0: 
        return bin(int_avg)[2:]
    else:
        return bin(int_avg+1)[2:]