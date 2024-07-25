```
def rescale_to_unit(numbers):
    while True:
        try:
            numbers = input("Enter space-separated float numbers: ")
            return [(float(x) - min(map(float, numbers.split()))) / (max(map(float, numbers.split())) - min(map(float, numbers.split()))) for x in numbers.split()]
            break
        except ValueError:
            print("Invalid input. Try again!")