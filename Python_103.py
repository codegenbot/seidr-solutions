```
import statistics

def rounded_avg(n, m):
    if not (isinstance(n, int) and isinstance(m, int)):
        return "Error: Input should be integers."
    if n > m:
        return -1
    avg = int(statistics.mean([n, m])) 
    return bin(avg)[2:]