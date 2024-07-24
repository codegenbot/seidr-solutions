def sum_product():
    numbers = []
    while True:
        try:
            num = int(input("Enter a number (or 'stop' to finish): "))
            if num == 'stop':
                break
            numbers.append(num)
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return sum(numbers), eval('*'.join(map(str, numbers)))

print(sum_product())