```
def double_the_difference(lst):
    if len(lst) > 0:
        return (max(lst) - min(lst)) * 2
    else:
        return "No numbers entered. Please enter at least one number."

def check():
    while True:
        try:
            a, b = input("Enter first and second set of numbers (space-separated): ").split()
            numbers = list(map(int, [a] + b.split()))
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    print(double_the_difference(numbers))

check()