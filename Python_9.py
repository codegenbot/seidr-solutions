def get_average(numbers):
    if not numbers:
        return None
    return sum(numbers) / len(numbers)

numbers = []
while True:
    num = input("Enter a number or type 'stop' to end: ").strip()
    if num == 'stop':
        break
    try:
        numbers.append(int(num))
    except ValueError:
        print("Invalid input. Please enter a valid number.")

average = get_average(numbers)
print(f"The average of the numbers is: {average}")