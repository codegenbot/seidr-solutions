def count_nums(arr):
    return sum(sum(int(digit) for digit in str(num)) > 0 for num in arr)