numbers = list(map(int, input().split()))
diff = abs(sum(numbers) - max(numbers) * 2)
if diff == 0 or max(numbers) - diff == 0:
    print(numbers)
    print([0])
else:
    idx = numbers.index(max(numbers))
    print(numbers[: idx + 1])
    print(numbers[idx + 1 :])