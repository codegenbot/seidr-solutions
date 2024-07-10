def sort_numbers():
    num_dict = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4,
                'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    numbers_str = input("Enter the numbers: ")
    nums = [num_dict[i] for i in numbers_str.split() if i in num_dict]
    return ' '.join(map(str, sorted(nums)))