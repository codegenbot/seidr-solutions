```
def rounded_avg():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = int((n + m) / 2 + 0.5) 
            return bin(int(avg))[2:]
        except ValueError:
            print("Invalid input. Please enter integers.")