```
import statistics

def rounded_avg():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    
    if n > m:
        return -1
    else:
        avg = int(statistics.mean([n, m])) 
        return bin(avg)[2:]