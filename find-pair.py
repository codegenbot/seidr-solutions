def find_pair():
    n = int(input())
    numbers = [int(x) for x in input().split()]
    target = int(input())
    numbers.sort()
    left = 0
    right = len(numbers) - 1

    while left < right:
        current_sum = numbers[left] + numbers[right]

        if current_sum == target:
            print(*[str(x) for x in [numbers[left], numbers[right]]])
            return

        elif current_sum < target:
            left += 1
        else:
            right -= 1


find_pair()