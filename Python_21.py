```
def rescale_to_unit():
    while True:
        numbers = input("Enter space-separated float numbers: ")
        try:
            return [(float(x) - min(map(float, numbers.split()))) / (max(map(float, numbers.split())) - min(map(float, numbers.split()))) for x in numbers.split()]
        except ValueError:
            print("Invalid input. Try again!")