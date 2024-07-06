
def luhn_algorithm(digits):
    # Double every other digit starting from the second digit
    digits = [2 * d if i % 2 == 0 else d for i, d in enumerate(digits)]
    # Subtract 9 from each number that is greater than 9
    digits = [d - 9 if d > 9 else d for d in digits]
    return sum(digits)

def main():
    while True:
        digits = [int(x) for x in input("Enter a vector of 16 digits: ").split()]
        if len(digits) != 16:
            print("Invalid input. Please enter exactly 16 digits.")
            continue
        break
    result = luhn_algorithm(digits)
    print(f"The sum of the new digits is {result}.")