```
def sum_of_squares(n):
    total = 0
    for i in range(1, n+1):
        total += i ** 2
    return total

while True:
    try:
        num = int(input("Enter a number: "))
        if num <= 0:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer. Try again!")

print(f"The sum of squares from 1 to {num} is {sum_of_squares(num)}")