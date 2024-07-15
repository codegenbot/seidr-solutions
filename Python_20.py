sorted_numbers = sorted(numbers)
closest_pair = min(zip(sorted_numbers, sorted_numbers[1:]), key=lambda x: x[1] - x[0])
return closest_pair