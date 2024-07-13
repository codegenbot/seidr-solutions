```
def largest_prime_factor(n):
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n

def main():
    while True:
        try:
            cont = input("Do you want to calculate again? (y/n): ")
            while True:
                if cont.lower() in ["y", "n"]:
                    break
                else:
                    print("Invalid input. Please enter 'y' or 'n'.")
                    cont = input("Please try again: ")
            if cont.lower() != "y":
                break
            
            n = int(input("Enter a number: "))
            while n <= 1:
                print("Please enter a positive integer greater than 1.")
                n = int(input("Enter a number: "))
            if n > 1:
                print(largest_prime_factor(n))
        except ValueError:
            print("Invalid input. Please enter an integer value.")
    print("Program ended.")

if __name__ == "__main__":
    main()