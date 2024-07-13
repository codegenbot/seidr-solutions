```
def sum_of_digits():
    total = 0
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a whole number.")
    while n:
        digit = n % 10
        if str(digit).isnumeric(): 
            total += digit
        else:
            return "Program did not receive expected input"
        n //= 10
    return total

print(sum_of_digits())