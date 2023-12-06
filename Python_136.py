def largest_smallest_integers(lst):
    largest = None
    smallest = None
    for num in lst:
        if num < 0 and (largest is None or num > largest):
            largest = num
        elif num > 0 and (smallest is None or num < smallest):
            smallest = num
    return (largest, smallest)