```
def process_numbers():
    numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
    numbers = []
    
    for num in numbers_str.split():
        if "-" in num:
            start_num, end_num = map(float, num.split("-"))
            numbers.extend([round(i, 1) for i in [float(j) for j in (str(int(start_num)), str(int(end_num))) if int(str(j).split('.')[0]) <= int(str(int(start_num)).split('.')[0]) and int(str(j).split('.')[0]) >= int(str(int(start_num)).split('.')[0])] + [float(j) for j in (str(int(start_num)), str(int(end_num))) if int(str(j).split('.')[0]) > int(str(int(start_num)).split('.')[0])]
        else:
            numbers.append(float(num))
    
    print(numbers)

process_numbers()