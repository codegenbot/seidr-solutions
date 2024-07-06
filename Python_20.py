def find_closest_elements():
    num_list = list(map(int, input("Enter numbers separated by space: ").split()))
    num_list.sort()

    target = int(input("Enter a target number to find closest elements: "))
    
    k = int(input("Enter the number of closest elements to find: "))

    left = max(0, target - (max(num_list) - min(num_list)))
    right = min(len(num_list), target + (max(num_list) - min(num_list)))

    min_diff = abs(target - num_list[0])
    closest_pair = []

    for i in range(left, right+1):
        if abs(target - num_list[i]) < min_diff:
            min_diff = abs(target - num_list[i])
            closest_pair = [num_list[i-k:i+1]]

    print(f"The {k} closest elements to {target} are: {' '.join(map(str, closest_pair[0]))}")

find_closest_elements()