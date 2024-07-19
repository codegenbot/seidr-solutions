numbers.sort()
min_diff = min(
    [
        (numbers[i + 1] - numbers[i], numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
    ]
)
return (min_diff[1], min_diff[2])