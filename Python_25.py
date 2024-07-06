```
def factorize(n):
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factorize(n)
    else:
        print(factors)

def main():
    while True:
        again = input("Do you want to factorize another number? (yes/no): ")
        while again.lower() in ["yes", "y"]:
            try:
                m = int(input("Enter a new number: "))
                if m < 2:
                    print("Invalid input. Please enter an integer greater than or equal to 2.")
                    continue
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")
                again = input("Do you want to factorize another number? (yes/no): ")
        if again.lower() != "yes" and again.lower() != "y":
            break
        factorize(m)