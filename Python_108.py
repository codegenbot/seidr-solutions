def count_nums(arr):
    return len([num for num in arr if sum(int(digit) for digit in str(num)) > 0])