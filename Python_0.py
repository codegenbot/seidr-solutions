numbers = [3, 8, 15, 5, 21]
threshold = 3


def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


has_close_elements = check_threshold(numbers, threshold)