def double_the_difference(numbers):
    if len(numbers) > 1:
        return (max(numbers) - min(numbers)) * 2
    else:
        return "No numbers entered. Please enter at least two numbers."


def check():
    while True:
        input_str = input("Enter first and second set of numbers (space-separated): ")
        if not input_str:
            print("Program did not receive expected input")
        elif len(input_str.split()) < 2:
            print("Please enter at least two numbers.")
        else:
            try:
                numbers = list(map(int, input_str.split()))
                print(double_the_difference(numbers))
                break
            except ValueError:
                print("Invalid input. Please enter space-separated numbers.")


check()