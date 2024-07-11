numbers = [3, 5, 2, 7, 8, 4, 5]
cut_index = min(range(1, len(numbers)), key=lambda i: abs(sum(numbers[:i]) - sum(numbers[i:])))
if cut_index == 0:
    print(numbers[:cut_index + 1], numbers[cut_index + 1:])
else:
    print(numbers[:cut_index], numbers[cut_index:])