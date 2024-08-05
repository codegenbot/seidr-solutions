def check_numbers(has_close_elements, threshold):
    has_close_elements.sort()
    for i in range(len(has_close_elements) - 1):
        if abs(has_close_elements[i] - has_close_elements[i + 1]) < threshold:
            return True
    return False