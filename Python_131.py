```
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def check():
    while True:
        n = input("Enter a number: ")
        if len(n) == 3 and n.isdigit():
            n = int(n)
            if 100 <= n <= 999:
                total = sum_of_digits(n)
                print(f"The sum of digits is {total}")
                break
            else:
                print("Invalid input. Please enter a three-digit integer.")
        else:
            print("Program did not receive expected input.")

check()