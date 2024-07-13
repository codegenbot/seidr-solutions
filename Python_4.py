```
def mean_absolute_deviation():
    numbers = []
    while True:
        try:
            num_input = input("Enter some numbers (space-separated): ")
            numbers = [float(num) for num in num_input.split()]
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")
    
    if len(numbers) < 2:
        return "Please enter at least two numbers."
    else:
        mean = sum(numbers) / len(numbers)
        return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)

while True:
    print(mean_absolute_deviation())
    choice = input("Do you want to enter more numbers? (y/n): ")
    if choice.lower() != 'y':
        break