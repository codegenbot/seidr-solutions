```
import statistics

def rounded_avg():
    n = float(input("Enter first number: "))
    m = float(input("Enter second number: "))
    
    if n > m:
        return -1
    avg = int(statistics.mean([n, m])) 
    return bin(avg)[2:]