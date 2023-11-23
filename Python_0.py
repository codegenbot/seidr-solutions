def has_close_elements(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers_input = """1 2 3 4 5"""
threshold_input = """2.5"""

numbers = list(map(int, numbers_input.split()))
threshold = float(threshold_input)

print(has_close_elements(numbers, threshold))