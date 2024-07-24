import math


def rounded_avg():
    total = 0
    count = 0
    while True:
        try:
            n = float(input(f"Enter number {count+1}: "))
            total += n
            count += 1
        except ValueError:
            print("Invalid input. Please enter a number.")
        
        if count == 2: 
            break

    return str(math.ceil(total / count))


print(rounded_avg())