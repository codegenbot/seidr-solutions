def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = sorted(map(int, input("Enter numbers separated by space: ").split()))
    return list(dict.fromkeys(input_list))