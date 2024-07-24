from string import format

def rounded_avg():
    n = int(input("Enter the first number: "))
    m = int(input("Enter the second number: "))

    if n > m:
        return -1
    avg = (n + m) // 2  
    if ((avg * 2) == (n + m)) and (not format(avg, 'b') in ['0', '1']):
        avg += 1
    return format(avg, 'b')