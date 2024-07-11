```
def find_closest_elements():
    numbers = input("Enter the list of numbers (space-separated): ")
    numbers = [float(num) for num in numbers.split()]
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[1] - numbers[0])
    
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    
    return closest_pair

print(find_closest_elements())