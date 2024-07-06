def main():
    while True:
        digits = [int(x) for x in input("Enter a vector of 16 digits: ").split()]
        if len(digits) != 16:
            print("Invalid input. Please enter exactly 16 digits.")
            continue
        break
    result = luhn_algorithm(digits)
    print(f"The sum of the new digits is {result}.")