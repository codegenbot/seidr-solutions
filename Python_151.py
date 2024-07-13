```
def double_the_difference(lst):
    if len(lst) > 0:
        return (max(lst) - min(lst)) * 2
    else:
        return "No numbers entered. Please enter at least one number."

def check():
    while True:
        try:
            input_str = input("Enter first and second set of numbers (space-separated): ")
            a, b = input_str.split()
            numbers = list(map(int, [a] + b.split()))
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    if len(numbers) == 2:
        return double_the_difference(numbers)
    else:
        return "Please provide exactly two sets of numbers."

print(check())