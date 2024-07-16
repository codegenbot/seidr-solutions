def check_numbers(arr, n):
    count = 0
    for num in arr:
        if num % n == 0:
            count += 1
    return count

result = check_numbers([5, 8, 3, 12, 7], 2)
print(result)