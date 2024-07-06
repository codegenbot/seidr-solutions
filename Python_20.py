def find_closest_elements():
    num_list1 = input("Enter first set of numbers separated by space: ").split()
    num_list2 = input("Enter second set of numbers separated by space: ").split()
    num_list1 = [int(num) for num in num_list1]
    num_list2 = [int(num) for num in num_list2]
    
    num_list1.sort()
    num_list2.sort()

    closest_pair = ((num_list1[0], num_list2[0]), (num_list1[-1], num_list2[-1]))
    min_diff = abs(num_list1[0] - num_list2[0])

    for i in range(1, len(num_list1)):
        for j in range(1, len(num_list2)):
            diff = abs(num_list1[i] - num_list2[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = ((num_list1[i], num_list2[j]), (num_list1[-1], num_list2[-1]))

    print("Closest pair of elements are: ", closest_pair)

find_closest_elements()