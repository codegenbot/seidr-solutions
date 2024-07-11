def has_close_values(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers = list(map(int, input().split()))
threshold = int(input())

print(has_close_values(numbers, threshold))