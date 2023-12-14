numbers = input().split()
threshold = input()

numbers = list(map(float, numbers))
threshold = float(threshold)

print(has_close_elements(numbers, threshold))