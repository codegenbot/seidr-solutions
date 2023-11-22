def unique_digits(x):
    return sorted([num for num in x if all(int(digit) % 2 != 0 for digit in str(num))])