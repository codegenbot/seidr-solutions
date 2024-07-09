numbers.sort()
diff = [(numbers[i], numbers[i + 1]) for i in range(len(numbers) - 1)]
return min(diff, key=lambda x: x[1] - x[0])