```
def sum_squares(lst):
    return round(sum([round(int(x)) ** 2 for x in lst]))


while True:
    while True:
        numbers = input("Enter numbers separated by space: ").split()
        if len(numbers) > 0 and all(isinstance(n, str) for n in numbers):
            break
        print("Invalid input. Please enter valid numbers separated by space:")

    while True:
        try:
            numbers = list(map(int, numbers))
            break
        except ValueError:
            print("Invalid input. Please enter only integers separated by space:")
    
    total_sum_of_squares = sum_squares(numbers)
    print(f"The sum of squares is {total_sum_of_squares}")