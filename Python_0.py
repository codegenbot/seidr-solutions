```
def has_close_elements():
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
    threshold = float(input("Enter the threshold value: "))

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False

print(has_close_elements())