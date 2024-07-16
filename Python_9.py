def get_numbers():
    numbers = []
    while True:
        num = input("Enter a number or type 'stop' to end: ")
        if num.lower() == 'stop':
            return numbers
        if num.replace('.', '', 1).lstrip('-').replace('.', '', 1).isdigit() or (num[0] == '-' and num[1:].replace('.', '', 1).isdigit() and len(num) > 1):
            numbers.append(float(num))
        else:
            print("Invalid input. Please enter a valid number.")

def calculate_sum(numbers):
    return sum(numbers)

numbers = get_numbers()
result = calculate_sum(numbers)
print(result)