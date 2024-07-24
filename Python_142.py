```
def sum_squares(n):
    return sum(i**2 for i in range(1, n+1))

try:
    while True:
        n = int(input("Enter a positive integer: "))
        if not n:
            print("Bye!")
            break
        try:
            if n > 0:
                print(sum_squares(n))
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print(
                "Invalid input. Please try again. Use only numbers (e.g., 123) or leave the field blank to exit."
            )
except Exception as e:
    print(f"An error occurred: {e}")