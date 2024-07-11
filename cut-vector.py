numbers = list(map(int, input().split()))
if len(numbers) <= 2 and numbers[-1] == sum(numbers[:-1]):
    cut_index = 1