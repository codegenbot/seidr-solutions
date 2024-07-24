```
while True:
    numbers = input("Enter numbers separated by space: ").split()
    if not numbers:
        print("Please enter some numbers.")
        continue
    while not all(map(lambda x: isinstance(int(x), int), numbers)):
        print("Invalid input. Please enter valid numbers separated by space:")
        numbers = input("Enter numbers separated by space: ").split()

    total_sum_of_squares = sum([n ** 2 for n in map(int, numbers)])
    print(f"The sum of squares is {total_sum_of_squares}")