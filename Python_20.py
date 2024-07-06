```
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()
    print("Closest pair of elements are: ", (num_list[0], num_list[-1]))

find_closest_elements()