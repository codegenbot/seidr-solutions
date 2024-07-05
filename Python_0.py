def check_pairs(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
threshold = int(input("Enter threshold: "))
print(check_pairs(numbers, threshold))