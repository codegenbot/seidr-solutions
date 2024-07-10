```
while True:
    def modp(num, p):
        if num < p:
            print(f"Number {num} is less than the prime number {p}. Please enter a valid input.")
        else:
            # your original code or any other operation
            pass
    num = int(input("Enter a number: "))
    p = int(input("Enter a prime number: "))
    modp(num, p)