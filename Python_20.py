def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()
    target = int(input("Enter a target value: "))
    closest_nums = sorted((abs(n - target), n) for n in num_list)[:min(len(num_list), int(input("Enter the number of closest elements to find: ")))])
    print("The {} closest elements are: {}".format(len(closest_nums), tuple(n for _, n in closest_nums)))