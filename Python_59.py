```
def main():
    def largest_prime_factor(n):
        i = n
        while i > 1:
            if is_prime(i):
                return i
            i -= 1

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

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