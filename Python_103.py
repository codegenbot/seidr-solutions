```
import statistics

def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = round((n + m) / 2)
            def check(rounded_avg):
                if rounded_avg % 2 == 0:
                    print(f"The average is even.")
                else:
                    print(f"The average is odd.")
            check(avg)
            return bin(int(str(avg)))[2:]
        except ValueError:
            print("Invalid input. Please enter integers.")