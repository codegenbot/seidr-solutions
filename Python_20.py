```Python
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()
    k = int(input("Enter the number of closest elements to find: "))
    
    if k > len(num_list):
        print("Closest pair of elements are: ", (num_list[0], num_list[-1]))
    else:
        midpoint = len(num_list) // 2
        if k <= midpoint:
            print("The {} closest elements are: {}".format(k, tuple(num_list[:k])))
        else:
            print("The {} closest elements are: {}".format(k, tuple(num_list[midpoint-k+1:midpoint+1])))


find_closest_elements()