def process_numbers():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []
    start_num = None
    end_num = None

    for num in numbers_str.split():
        if "-" in num:
            start_num, end_num = map(float, num.split("-"))
            numbers.extend([round(i, 1) for i in [float(j) for j in (str(int(start_num)), str(int(end_num)),)]])
        else:
            if num.isdigit():
                numbers.append(float(num))
            else:
                if start_num is None and end_num is None:
                    try:
                        start_num, end_num = map(float, num.split("-"))
                        numbers.extend([round(i, 1) for i in [float(j) for j in (str(int(start_num)), str(int(end_num)),)]])
                    except ValueError:
                        print(f"Program did not receive expected input: {num}")
    print(numbers)

process_numbers()