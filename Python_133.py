```
def sum_squares(lst):
    return round(sum([round(int(x))**2 for x in lst]))

while True:
    while True:
        numbers = input("Enter numbers separated by space: ").split()
        valid_input = all(map(lambda x: isinstance(int(x), int), numbers))
        if valid_input:
            break
        print("Invalid input. Please enter valid numbers separated by space:")

    total_sum_of_squares = sum_squares(list(map(int, numbers)))
    break

print(f"The sum of squares is {total_sum_of_squares}")