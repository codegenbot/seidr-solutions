```Python
def find_closest_elements():
    set1 = input("Enter first set of numbers separated by space: ").split()
    set2 = input("Enter second set of numbers separated by space: ").split()
    
    set1 = [int(num) for num in set1]
    set2 = [int(num) for num in set2]

    set1.sort()
    set2.sort()

    min_diff = float('inf')
    closest_pair = (0, 0)

    i = j = 0

    while i < len(set1) and j < len(set2):
        diff = abs(set1[i] - set2[j])
        
        if diff < min_diff:
            min_diff = diff
            closest_pair = (set1[i], set2[j])

        if set1[i] < set2[j]:
            i += 1
        else:
            j += 1

    print("Closest pair of elements are: ", closest_pair)

find_closest_elements()