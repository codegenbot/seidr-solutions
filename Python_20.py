def find_closest_elements(list1, list2):
    min_diff = float('inf')
    for num1 in list1:
        for num2 in list2:
            diff = abs(num1 - num2)
            if diff < min_diff:
                min_diff = diff

    return str(min_diff)

list1 = list(map(int, input("Enter first set of numbers separated by space: ").split()))
list2 = list(map(int, input("Enter second set of numbers separated by space: ").split()))

print("Closest pair is: ", find_closest_elements(list1, list2))