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
                if rounded_avg % 3 == 0:
                    return "The average is divisible by 3."
                elif rounded_avg % 5 == 0:
                    return "The average is divisible by 5."
                else:
                    return "The average is neither divisible by 3 nor 5."
            print(check(avg))
            return bin(avg)[2:]
        except ValueError:
            print("Invalid input. Please enter integers.")