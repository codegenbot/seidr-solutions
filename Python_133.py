def sum_squares(lst):
    return round(sum([round(int(x))**2 for x in lst]))

while True:
    numbers = input("Enter numbers separated by space: ").split()
    valid_input = True
    for i in range(len(numbers)):
        try:
            int(numbers[i])
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by space:")
            valid_input = False
            break

    if valid_input:
        total_sum_of_squares = sum_squares(list(map(int, numbers)))
        break

print(f"The sum of squares is {total_sum_of_squares}")