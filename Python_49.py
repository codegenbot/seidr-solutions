def main():
    while True:
        num = input("Enter a number: ")
        p = input("Enter the prime number: ")

        try:
            num = int(num)
            p = int(p)
            break
        except ValueError:
            print("Invalid input. Please enter numbers.")

    if is_prime(p):
        print(f"{num} to the power of {p} mod {p} is {modp(num, p)}")
    else:
        print("The given prime number is not valid. Please enter a prime number.")