```
def solve():
    total = 0
    for _ in range(5):
        while True:
            try:
                num = int(input("Enter a number: "))
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
        total += num
    return total