import statistics

def rounded_avg(n, m):
    if n > m:
        return -1
    avg = int(statistics.mean([n, m])) 
    return bin(avg)[2:]