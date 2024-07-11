def count_nums(arr):
    return sum(1 for num in arr if sum(int(digit) if digit != '-' else -int(digit[1:]) for digit in str(num).replace('-', '')) > 0)