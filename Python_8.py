```
def process_numbers():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []
    
    for num in numbers_str.split():
        if "-" in num:
            start_num, end_num = map(float, num.split("-"))
            numbers.extend([round(i, 1) for i in range(int(start_num), int(end_num)+1)])
        else:
            numbers.append(float(num))
    
    print(numbers)

process_numbers()