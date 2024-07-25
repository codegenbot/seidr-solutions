```
def process_numbers():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []
    
    for num in numbers_str.split():
        if "-" in num:
            start_num, end_num = map(float, num.split("-"))
            if start_num < end_num:
                numbers.extend([round(i, 1) for i in [start_num + 0.1 * k for k in range(int((end_num - start_num) * 10))]])
            else:
                print(f"Invalid input: {num}")
        elif num.isdigit():
            numbers.append(float(num))
        else:
            try:
                numbers.append(float(num))
            except ValueError:
                print(f"Program did not receive expected input: {num}")
    print(numbers)

process_numbers()