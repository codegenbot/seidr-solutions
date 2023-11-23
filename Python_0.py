try:
    numbers = list(map(float, input().split()))
    threshold = float(input())
except ValueError:
    print("Invalid input. Please provide valid numbers.")
    exit()

def has_close_elements(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

print(has_close_elements(numbers, threshold))