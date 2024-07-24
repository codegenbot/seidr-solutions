def search():
    try:
        lst = [int(x) for x in input("Enter a list of numbers separated by space: ").split()]
        frequency_dict = {}
        for num in lst:
            if num > 0:
                if num in frequency_dict:
                    frequency_dict[num] += 1
                else:
                    frequency_dict[num] = 1
        max_num = -1
        for key, value in frequency_dict.items():
            if key >= value and key > 0:
                if key > max_num:
                    max_num = key
        return max_num
    except ValueError:
        return "Invalid input. Please enter a list of numbers separated by space."

print(search())