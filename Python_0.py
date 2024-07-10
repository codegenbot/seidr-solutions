def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

numbers = []
while True:
    num = input("Enter a number (or 'STOP' to end): ").strip()
    if num == "STOP":
        break
    if num.isnumeric():  # Add this line to handle "STOP" without error
        numbers.append(int(num))

threshold = input("Enter a threshold number: ").strip()
if threshold.isnumeric():  # Add this line for input validation
    threshold = int(threshold)
    output = check_numbers(numbers, threshold)
    print(output)