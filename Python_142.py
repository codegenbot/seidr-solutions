```python
def calculate_sum_of_cubes(n):
    total = 0
    for i in range(1, n + 1):
        total += i ** 3
    return total


def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    num = calculate_sum_of_cubes(n)
    if num < 1000000:
        print("The sum of cubes is less than 1 million.")
    else:
        print("The sum of cubes is greater than or equal to 1 million.")


check()