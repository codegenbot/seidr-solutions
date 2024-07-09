def find_pair(n, numbers):
    numbers.sort()
    left, right = 0, len(numbers) - 1
    while left < right:
        current_sum = numbers[left] + numbers[right]
        if abs(current_sum - n) < 0.001:
            return str(numbers[left]) + "\n" + str(numbers[right])
        elif current_sum < n:
            left += 1
        else:
            right -= 1


n = int(input())
print(find_pair(n, [int(x) for x in input().split("\n")[1:-1]]))