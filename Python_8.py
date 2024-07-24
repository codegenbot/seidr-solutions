```
def sum_product():
    numbers = []
    while True:
        try:
            num = input("Enter a number (or 'stop' to finish): ")
            if num == 'stop':
                break
            numbers.append(int(num))
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return sum(numbers), eval('*'.join(map(str, numbers)))

print(sum_product())