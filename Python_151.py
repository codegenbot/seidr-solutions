```
def double_the_difference(lst):
    if len(lst) > 1:
        return (max(lst) - min(lst)) * 2
    else:
        return "No numbers entered. Please enter at least two numbers."

def check():
    while True:
        input_str = input("Enter first and second set of numbers (space-separated): ")
        if input_str: 
            try:
                numbers = list(map(int, input_str.split()))
                print(double_the_difference(numbers))
                break
            except ValueError:
                print("Invalid input. Please enter space-separated numbers.")