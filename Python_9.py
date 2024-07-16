def get_numbers():
    numbers = []
    while True:
        try:
            num = input("Enter a number or type 'stop' to end: ")
            if num.lower() == 'stop':
                return numbers
            numbers.append(float(num))
        except ValueError:
            print("Invalid input. Please enter a valid number.") 

def calculate_sum(numbers):
    return sum(numbers)

numbers = get_numbers()
result = calculate_sum(numbers)
print(result)