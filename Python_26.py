def remove_duplicates():
    input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    return [int(x) for x in set(input_list)]