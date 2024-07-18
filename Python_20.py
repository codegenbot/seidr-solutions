def find_min_difference(numbers):
    numbers.sort()
    return min(abs(numbers[i] - numbers[i+1]) for i in range(len(numbers)-1))