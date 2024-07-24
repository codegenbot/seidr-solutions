import statistics

def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return 'Error'
            avg = round((n + m) / 2)
            return bin(avg)[2:]