def rounded_avg():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = int(statistics.mean([n, m]) + 0.5) 
            return bin(int(avg))[2:]