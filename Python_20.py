try:
    def find_min_difference(numbers):
        numbers.sort()
        min_diff = float('inf')
        for i in range(len(numbers) - 1):
            diff = abs(numbers[i] - numbers[i+1])
            min_diff = min(min_diff, diff)
        return min_diff

    input_numbers = [int(x) for x in input().split()]
    output = find_min_difference(input_numbers)
    print(output)
except EOFError:
    pass