numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
numbers = []
parts = [
    part
    for part in numbers_str.split()
    if part.replace("-", "", 1)
    .replace(".", "")
    .replace("-", "")
    .replace(".", "")
    .isdigit()
]
for part in parts:
    if "-" not in part and "." not in part:
        numbers.append(float(part))
    else:
        start, end = map(float, part.split("-"))
        for num in range(int(start), int(end) + 1):
            numbers.append(num)