```
numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
numbers = []
start_num = None
end_num = None

for num in numbers_str.split():
    if "-" in num:
        start_num, end_num = map(float, num.split("-"))
        numbers.extend([round(i, 1) for i in [float(j) for j in (str(int(start_num)), str(int(end_num)),)]])
    else:
        try:
            numbers.append(float(num))
        except ValueError:
            print("Program did not receive expected input")
print(numbers)