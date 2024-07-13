def double_the_difference(lst):
    if len(lst) > 0:
        return (max(lst) - min(lst)) * 2
    else:
        return "No numbers entered. Please enter at least one number."


def check():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    if len(numbers) == 0:
        print("Program did not receive expected input")
    else:
        print(double_the_difference(numbers))


check()