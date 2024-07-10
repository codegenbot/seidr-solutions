numbers.sort()
diff = [abs(numbers[i] - numbers[i + 1]) for i in range(len(numbers) - 1)]
min_diff = min(diff)
indices = [i for i, j in enumerate(diff) if j == min_diff]
return numbers[indices[0]], numbers[indices[0] + 1]