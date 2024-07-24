```
import statistics

def rounded_avg():
    n, m = map(int, input("Enter two numbers: ").split())
    if n > m:
        return -1
    avg = int(statistics.mean([n, m]) + 0.5) 
    return bin(int(avg))[2:]