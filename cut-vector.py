n = int(input())
numbers = [int(input()) for _ in range(n)]

mid = n // 2
left_sum = sum(numbers[:mid])
right_sum = sum(numbers[mid:])

if left_sum == right_sum or abs(left_sum - right_sum) <= 1:
    print(*numbers[:mid])
    print(*numbers[mid:])
else:
    if left_sum < right_sum:
        while abs(left_sum - right_sum) > 1:
            mid += 1
            left_sum += numbers[mid - 1]
            right_sum -= numbers[mid - 1]
    else:
        while abs(left_sum - right_sum) > 1:
            mid -= 1
            left_sum -= numbers[mid]
            right_sum += numbers[mid]
    print(*numbers[:mid])
    print(*numbers[mid:])