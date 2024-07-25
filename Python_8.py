def process_numbers():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []

    for num in numbers_str.split():
        if "-" in num:
            start_num, end_num = map(float, num.split("-"))
            numbers.extend([round(i, 1) for i in get_numbers(start_num, end_num)])
        else:
            numbers.append(float(num))

    print(numbers)


def get_numbers(start_num, end_num):
    result = []
    for i in range(int(start_num), int(end_num) + 1):
        if str(i).split(".")[0] == str(int(start_num)).split(".")[0]:
            result.append(str(i))
        else:
            result.append(f"{str(int(start_num)).split('.')[0]}-{str(i)}")
    return [float(j) for j in result]