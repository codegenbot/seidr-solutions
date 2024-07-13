```
def main():
    while True:
        try:
            num = input("Enter a number: ") 
            if not num.replace(".", "", 1).isdigit():
                print("Invalid input. Please enter an integer.")
                continue
            n = int(num)
            print(largest_prime_factor(n))
        except (ValueError, EOFError):
            print("Invalid input. Please enter an integer.")