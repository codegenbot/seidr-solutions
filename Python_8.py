numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
numbers = []
start_num = None
end_num = None

for num in numbers_str.split():
    if "-" in num:
        try:
            start_num, end_num = map(float, num.split("-"))
            for i in [round(j, 1) for j in (int(start_num), int(end_num))]:
                numbers.extend([i])
        except ValueError:
            print("Invalid range: " + num)
    else:
        try:
            numbers.append(float(num))
        except ValueError:
            print("Invalid number: " + num)
print(numbers)