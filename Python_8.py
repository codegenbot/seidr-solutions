```
def parse_input():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []
    for num in numbers_str.split():
        if "-" in num:
            start, end = map(float, num.split("-"))
            numbers.extend([i for i in range(int(start), int(end) + 1)])
        else:
            numbers.append(float(num))
    return numbers