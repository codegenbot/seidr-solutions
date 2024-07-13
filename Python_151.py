def double_the_difference(lst):
    if len(lst) > 0:
        return (max(lst) - min(lst)) * 2


def check():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if all(isinstance(i, int) for i in numbers):
                break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")
    print(double_the_difference(numbers))


check()