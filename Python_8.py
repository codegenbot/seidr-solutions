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
            if float(num):
                if start_num is None and end_num is None:
                    numbers.append(float(num))
                elif start_num is not None and end_num is None:
                    numbers.append(f"{start_num}-{num}")
                elif start_num is None and end_num is not None:
                    numbers.append(f"{num}-{end_num}")
                else:
                    if num < start_num or num > end_num:
                        print(f"Program did not receive expected input: {num}")
            else:
                print(f"Program did not receive expected input: {num}")
        except ValueError:
            print(f"Program did not receive expected input: {num}")
print(numbers)