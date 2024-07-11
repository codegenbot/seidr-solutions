def double_the_difference(numbers):
    first_half = sorted([n for n in numbers[:len(numbers)//2]])
    second_half = sorted([n for n in numbers[len(numbers)//2:]]
    
    return (first_half[-1] - second_half[0]) * 2