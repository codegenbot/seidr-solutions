def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    start = input("Do you want to start? (yes/no): ")
    if start != "yes":
        continue

    input_str = input("Enter a list of numbers separated by space: ")
    try:
        lst = [int(x) for x in input_str.split()]
    except ValueError as e:
        print(f"Invalid input. Please enter numeric values: {e}. Try again!")
        continue

    if all(-100 <= n <= 100 for n in lst):
        print(sum_squares(lst))
        break
    else:
        print("Some numbers are out of range.")